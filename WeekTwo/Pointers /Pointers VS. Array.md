# Arrays and Pointers in C

> **An array name is not a pointer. In most expressions it *decays* (converts) into a pointer to its first element.**

---

## 1. Array vs. pointer

| | Array | Pointer |
|---|---|---|
| What it is | A contiguous block of elements | A variable that stores an address |
| Storage | Holds the actual elements | Holds only an address |
| `sizeof` | Size of the whole array (`3 * sizeof(int)` = 12) | Size of an address (4 or 8 bytes) |
| Reassignable | No (`arr = other;` is an error) | Yes (`p = other;`) |
| Type of `&name` | `int (*)[3]` (pointer to the whole array) | `int **` (pointer to the pointer) |

---

## 2. What is decay?

When an array name is used in an expression, the compiler replaces it with the address of its first element:

```c
int arr[3] = {1, 2, 3};

arr   // in most expressions becomes  &arr[0]  (type: int *)
```

This is a **temporary value** computed during the expression. It is not stored anywhere, and `arr` itself remains an array. It is like the result of `2 + 3`: you can use it, but you can't assign to it or take its address.

### When decay does NOT happen

The array name stays an array when it is:

- the operand of `sizeof`
- the operand of `&`
- a string literal used to initialize a char array

---

## 3. Example: no pointer variable needed

```c
#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3};

    printf("arr[0]    = %d\n", arr[0]);      // 1
    printf("*(arr)    = %d\n", *arr);        // 1
    printf("arr[1]    = %d\n", arr[1]);      // 2
    printf("*(arr+1)  = %d\n", *(arr + 1));  // 2

    return 0;
}
```

This works without `int *p = arr;`. In `*arr` and `*(arr + 1)`, the compiler converts `arr` to `&arr[0]` for the duration of the expression:

```c
*arr         // arr -> &arr[0], then * dereferences it
*(arr + 1)   // arr -> &arr[0], +1 -> &arr[1], then * dereferences it
arr[1]       // defined as *(arr + 1), so identical
```

The line `int *p = arr;` only **stores** the converted address in a variable. The conversion happens either way.

---

## 4. Indexing is pointer arithmetic

```c
arr[i]  ==  *(arr + i)
```

Adding `i` to a pointer moves it by `i * sizeof(element)` bytes, not `i` bytes. This is why `p[2]` also works when `p` is a plain pointer.

---

## 5. Proof that `arr` is still an array

```c
printf("%zu\n", sizeof(arr));   // 12  (3 ints x 4 bytes)
```

If `arr` were really a pointer, this would print the pointer size (4 or 8).

```c
int *p = arr;

p = p + 1;       // OK: p is a variable, now points to arr[1]
arr = arr + 1;   // ERROR: arr does not hold an address
&p;              // OK: p has its own memory location
&arr;            // type int (*)[3], the address of the whole array
```

---

## 6. Arrays in functions

Because of decay, an array passed to a function arrives as a pointer. These declarations are identical:

```c
void f(int a[]);
void f(int a[3]);   // the 3 is ignored
void f(int *a);
```

Inside `f`, `sizeof(a)` is the pointer size, so pass the length separately:

```c
void printArray(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
```

The function receives only the address, so changes affect the caller's original array.

---

## 7. 2D arrays (common pitfall)

A 2D array is an array of arrays, stored contiguously in row-major order:

```c
int m[3][4];
int (*row)[4] = m;   // m decays to int (*)[4]
```

`m` decays to `int (*)[4]`, **not** `int **`, so the two types are not compatible.

---

## Summary

- Array = a block of elements. Pointer = a variable holding an address.
- In most expressions, an array name evaluates to a pointer to its first element (decay).
- That pointer is a temporary value, not a stored variable.
- `arr[i]` is just `*(arr + i)`.
- They differ in `sizeof`, reassignability, and the type of `&`.

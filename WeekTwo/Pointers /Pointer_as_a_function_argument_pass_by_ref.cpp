#include <stdio.h>
/*
passing argument by value 
* 1- main() starts. a is created in main's frame and holds 10.
  2- incrementFunction(a) is called.
  3- C passes by value, so the function gets a copy of 10 in a new variable n, in its own frame at a different address.
  4- n += 1 changes only the copy. n becomes 11.
  5- The function returns and its frame is destroyed. n no longer exists.
  6- Back in main, (a) was never touched, so it is still 10.
 */
void incrementFunction(int n) {
    n += 1;
    printf("%d\n", n);
    printf("the address of the variable in the function is %p\n", &n);
}
int main(void) {
    int a = 10;
    incrementFunction(a);
    printf("%d\n", a);
    printf("the address of the variable in the main is %p\n", &a);




    return 0;
}


//////////////////////////////////////////////////////////////
// passing the value by reference as a pointer application 
#include <stdio.h>

void incrementFunction(int *p) {
   (*p) += 1;
    printf("%d\n", *p);
    printf("the address of the variable in the function is %p\n", p);
}
int main(void) {
    int a = 10;
    incrementFunction(&a);
    printf("%d\n", a);
    printf("the address of the variable in the main is %p\n", &a);




    return 0;
}


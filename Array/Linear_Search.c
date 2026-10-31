#include <stdbool.h>
#include <math.h>
#include <stdio.h>
int found(int arr[], int n, int key) {


    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i + 1;

    }
    return -1;
}


int main(void) {
    int size, element;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d", &element);
    int val =found(arr, size, element);
    if (val == -1) {printf("Not found\n");}
    else {printf("Found at position %d",val);}









    return 0;
}


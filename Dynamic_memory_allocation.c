
#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    printf("enter the size of 1st array: ");
    scanf("%d", &n);
    // using malloc
    /*
     * 1- returns void pointer
     * 2- takes onr argument (n*sizeof(data_size))
     * 3- initialize garbage
     */
    int *arr = (int *)malloc(n*sizeof(int));
    for (int i =0 ;i <n ; i++) {
        arr[i] = i+1;
    }
    for (int i =0; i <n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int size;
    printf("enter the size of 2nd array: ");
    scanf("%d", &size);
    // using calloc
    /*
     * returns void pointer
     * takes 2 argument (n, sizeof(data_size));
     * initialize values with 0
     */

    int *arr2 =(int *)calloc(n, sizeof(int));
    for (int i =0; i <size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    //realloc
    /*returns void pointer
     * extend or shrink or modify the size
     * takes 2 arguments the prev pointer and the new size
     */
    printf("\n");
    int *b = (int *)realloc(arr, (size/2)*sizeof(int));
    for (int i =0; i <size/2; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    
    *arr =(int *)realloc(arr, 0); // same as free(arr)
    *b =(int *)realloc(NULL, n*sizeof(int));// same as calling malooc 





    return 0;
}

#include <iso646.h>
#include <math.h>
#include <stdio.h>
#define MX_SIZE 100

int main(void) {
    int arr[MX_SIZE];
    int n, pos, element;
    printf("enter the size of your array from 1 to %d: ", MX_SIZE -1);
    scanf("%d", &n);
    for (int i =0; i<n;i++) {
        printf("arr[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos <0 || pos >MX_SIZE)printf("Invalid position\n");
    else {
        for (int i =MX_SIZE -1 ; i >=pos-1; i--) {
            arr[i+1]=arr[i];
            arr[pos-1]=element;


        }
        n++;

    }
    for (int i =0; i <n ; i++) {
        printf("arr[%d] = %d\n", i+1, arr[i]);
    }



    return 0;
}


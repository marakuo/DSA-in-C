#include <iso646.h>
#include <math.h>
#include <stdio.h>


int main(void) {
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int size =sizeof(arr)/sizeof(arr[0]);
    int pos;
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);
    if (pos <1 || pos >size)printf("Invalid input\n");
    else {
        for (int i= pos -1; i < size -1 ; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

    }
    for (int i= 0; i < size; i++) {
        printf("%d ", arr[i]);
    }







    return 0;
}


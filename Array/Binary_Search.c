#include <stdio.h>

int BinarySearch(int arr[], int n, int key) {

    int start = 0;
    int end = n - 1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        else if (arr[mid] > key) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
    }

    return -1;
}

int main(void) {

    int arr[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = BinarySearch(arr, n, key);

    if (result == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}

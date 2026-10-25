#include <iso646.h>
#include <math.h>
#include <stdio.h>



int main(void) {
    int n; scanf("%d", &n);
  int arr[n];
    for (int i =0; i <n ;i++) {
        scanf("%d", &arr[i]);

    }
    int mx = arr[0], mn=arr[0], mxpos=0 , mnpos=0;
    for (int i = 1; i < n; i++) {
        if (arr[i]> mx) {
            mx=arr[i];
            mxpos =i;
        }
    }
    for (int i = 1; i < n; i++) {
        if (arr[i]< mn) {
            mn=arr[i];
            mnpos =i;
        }
    }
    printf("max element arr [%d] = %d\n", mxpos + 1, mx);
    printf("min element arr [%d] = %d\n", mnpos + 1, mn);





    return 0;
}


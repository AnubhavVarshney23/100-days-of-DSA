#include <stdio.h>

int main() {
    int n, i;
    printf("enter the number of elements in the array\n");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        printf("enter element number %d: ",i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    int l, r,temp;
    l=0;
    r = n - 1;
    while(l < r) {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

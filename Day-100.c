#include <stdio.h>
#include <stdlib.h>

struct Pair {
    int value;
    int index;
};

void merge(struct Pair arr[], int left, int mid, int right, int count[]) {
    int i = left, j = mid + 1, k = 0;
    struct Pair temp[right - left + 1];
    int rightCount = 0;

    while(i <= mid && j <= right) {
        if(arr[j].value < arr[i].value) {
            temp[k++] = arr[j++];
            rightCount++;  // smaller element found on right
        } else {
            count[arr[i].index] += rightCount;
            temp[k++] = arr[i++];
        }
    }

    while(i <= mid) {
        count[arr[i].index] += rightCount;
        temp[k++] = arr[i++];
    }

    while(j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy back
    for(i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}

void mergeSort(struct Pair arr[], int left, int right, int count[]) {
    if(left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid, count);
        mergeSort(arr, mid + 1, right, count);
        merge(arr, left, mid, right, count);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], count[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }

    struct Pair pairs[n];
    for(int i = 0; i < n; i++) {
        pairs[i].value = arr[i];
        pairs[i].index = i;
    }

    mergeSort(pairs, 0, n - 1, count);

    // Print result
    for(int i = 0; i < n; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}

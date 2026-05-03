#include <stdio.h>

// Function to find maximum element
int getMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find sum of array
int getSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Check if possible within given time
int isPossible(int arr[], int n, int k, int maxTime) {
    int painters = 1;
    int currentTime = 0;

    for(int i = 0; i < n; i++) {
        if(currentTime + arr[i] <= maxTime) {
            currentTime += arr[i];
        } else {
            painters++;
            currentTime = arr[i];

            if(painters > k)
                return 0;
        }
    }
    return 1;
}

int minTime(int arr[], int n, int k) {
    int start = getMax(arr, n);
    int end = getSum(arr, n);
    int result = end;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(isPossible(arr, n, k, mid)) {
            result = mid;
            end = mid - 1;  // try smaller time
        } else {
            start = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", minTime(arr, n, k));

    return 0;
}

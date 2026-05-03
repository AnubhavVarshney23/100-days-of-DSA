#include <stdio.h>
#include <stdlib.h>

// Structure for interval
struct Interval {
    int start, end;
};

// Sort by start time
int compare(const void *a, const void *b) {
    struct Interval *i1 = (struct Interval *)a;
    struct Interval *i2 = (struct Interval *)b;
    return i1->start - i2->start;
}

void mergeIntervals(struct Interval arr[], int n) {
    if(n <= 0) return;

    // Sort intervals
    qsort(arr, n, sizeof(struct Interval), compare);

    int currentStart = arr[0].start;
    int currentEnd = arr[0].end;

    for(int i = 1; i < n; i++) {
        // Overlapping case
        if(arr[i].start <= currentEnd) {
            if(arr[i].end > currentEnd)
                currentEnd = arr[i].end;
        } else {
            // No overlap → print previous interval
            printf("%d %d\n", currentStart, currentEnd);
            currentStart = arr[i].start;
            currentEnd = arr[i].end;
        }
    }

    // Print last interval
    printf("%d %d\n", currentStart, currentEnd);
}

int main() {
    int n;
    scanf("%d", &n);

    struct Interval arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    mergeIntervals(arr, n);

    return 0;
}

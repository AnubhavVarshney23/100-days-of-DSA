#include <stdio.h>
#include <stdlib.h>

// Structure for meeting
struct Meeting {
    int start, end;
};

// Compare function for qsort (sort by start time)
int compare(const void *a, const void *b) {
    struct Meeting *m1 = (struct Meeting *)a;
    struct Meeting *m2 = (struct Meeting *)b;
    return m1->start - m2->start;
}

// Min Heap functions
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

void heapifyUp(int heap[], int index) {
    while(index > 0 && heap[(index - 1)/2] > heap[index]) {
        swap(&heap[(index - 1)/2], &heap[index]);
        index = (index - 1)/2;
    }
}

void heapifyDown(int heap[], int size, int index) {
    int smallest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left < size && heap[left] < heap[smallest])
        smallest = left;

    if(right < size && heap[right] < heap[smallest])
        smallest = right;

    if(smallest != index) {
        swap(&heap[index], &heap[smallest]);
        heapifyDown(heap, size, smallest);
    }
}

// Insert into heap
void push(int heap[], int *size, int value) {
    heap[*size] = value;
    (*size)++;
    heapifyUp(heap, (*size) - 1);
}

// Remove min
void pop(int heap[], int *size) {
    heap[0] = heap[*size - 1];
    (*size)--;
    heapifyDown(heap, *size, 0);
}

int minRooms(struct Meeting arr[], int n) {
    // Sort by start time
    qsort(arr, n, sizeof(struct Meeting), compare);

    int heap[n];  // min heap of end times
    int size = 0;

    push(heap, &size, arr[0].end);

    for(int i = 1; i < n; i++) {
        // If earliest meeting finished
        if(arr[i].start >= heap[0]) {
            pop(heap, &size);
        }
        push(heap, &size, arr[i].end);
    }

    return size;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Meeting arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }

    printf("%d\n", minRooms(arr, n));

    return 0;
}

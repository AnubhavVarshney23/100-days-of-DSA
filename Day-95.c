#include <stdio.h>
#include <stdlib.h>

// Node for linked list (bucket)
struct node {
    float data;
    struct node* next;
};

// Insert in sorted order (Insertion sort in bucket)
void insertSorted(struct node** head, float value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL || (*head)->data >= value) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct node* temp = *head;
        while(temp->next != NULL && temp->next->data < value) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void bucketSort(float arr[], int n) {
    // Create buckets
    struct node* buckets[n];
    for(int i = 0; i < n; i++) {
        buckets[i] = NULL;
    }

    // Distribute elements into buckets
    for(int i = 0; i < n; i++) {
        int index = n * arr[i];
        insertSorted(&buckets[index], arr[i]);
    }

    // Concatenate buckets
    int k = 0;
    for(int i = 0; i < n; i++) {
        struct node* temp = buckets[i];
        while(temp != NULL) {
            arr[k++] = temp->data;
            temp = temp->next;
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);
    float arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    bucketSort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}

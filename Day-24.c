#include <stdio.h>
#include <stdlib.h>

// Define structure for linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to delete first occurrence of key
struct Node* deleteFirstOccurrence(struct Node* head, int key) {
    struct Node *temp = head, *prev = NULL;

    // If head node itself holds the key
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key not found
    if (temp == NULL)
        return head;

    // Unlink the node
    prev->next = temp->next;
    free(temp);

    return head;
}

int main() {
    int n, value, key;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    scanf("%d", &n);

    // Create linked list
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        newNode = createNode(value);

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    scanf("%d", &key);

    head = deleteFirstOccurrence(head, key);

    // Print updated list
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int main() {
    int n, value, i;
    printf("how many nodes would you like?: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++) {
	printf("enter node %d: ",i+1);
        scanf("%d", &value);
	struct node *newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
    	newNode->next = NULL;

    	if (head == NULL) {
        	head = newNode;
    	} else {
        	struct node *temp = head;
        	while (temp->next != NULL) {
            	temp = temp->next;
        	}
        	temp->next = newNode;
    	}
    	}

     	struct node *temp = head;
    	while (temp != NULL) {
    	    printf("%d ", temp->data);
    	    temp = temp->next;
    	}

    	return 0;
}

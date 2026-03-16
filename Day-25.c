#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node* next;
};

struct node* head = NULL;

int main()
{
	int nnn,val;
	printf("how many nodes do you want?: ");
	scanf("%d", &nnn);
	printf("\n");
	
	if (nnn <= 0)
	{
		printf("put real terms");
		return 0;
	}
	struct node* temp = NULL;
	while (nnn != 0)
	{
		struct node* nn = (struct node*) malloc (sizeof(struct node));
		printf("what whould you like your value: ");
		scanf("%d", &val);
		nn->info = val;
		nn->next = NULL;

		if (head == NULL)
		{
			head = nn;
			temp = nn;
		}
		else
		{
			temp->next = nn;
			temp = nn;
		}
		nnn--;
	}
	temp = head;
	int count = 0, tar;
	printf("what element would you like to count??: ");
	scanf("%d", &tar);
	printf("\n");
	while (temp != NULL)
	{
		if (temp->info == tar)
		{
			count++;
		}
		temp= temp->next;
	}
	printf("no of elements: %d \n", count);
}

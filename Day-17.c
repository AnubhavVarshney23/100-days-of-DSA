#include <stdio.h>
int main()
{
	int m,i;
	printf("what is the size of ur array: ");
	scanf("%d", &m);
	printf("\n");
	int arr[m];
	int max,min;
	printf("all the elements :");
	for (i=0;i<m;i++)
	{
		scanf("%d", &arr[i]);
	}
	int sum=0,avg;
	for (i=0;i<m;i++)
	{
		sum += arr[i];
	}
	avg = sum/m;
	min = avg;
	max = avg;
	for(i=0;i<m;i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		else if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("\nmin : %d\nmax : %d", min, max);
}

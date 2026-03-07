#include <stdio.h>
int main()
{
        int m,i,n;
        printf("enter the size of your array: ");
        scanf("%d", &m);
        printf("\n");
        printf("enter your array:\n");
        int arr[m], temp[m];
        for(i=0;i<m;i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("what would you like the array to shift to: ");
        scanf("%d", &n);
        n = n % m;
        for (i=0;i<m;i++)
        {
                temp[(i+n)%m] = arr[i];
        }

        for (i=0;i<m;i++)
        {
                printf("%d ", temp[i]);
        }
}

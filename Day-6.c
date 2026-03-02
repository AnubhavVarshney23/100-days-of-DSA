#include <stdio.h>
int main()
{
        int i,n,k;
        printf("enter the number of elements in your array: ");
        scanf("%d",&n);
        printf("\n");

        int arr[n],arr2[n];
        for (i=0;i<n;i++)
        {
                printf("enter element %d for array: ", i+1);
                scanf("%d",&arr[i]);
        }
        k==1;
        for(i=0;i<n;i++)
        {
                arr2[0] = arr[0];
                if(arr[i+1]==arr[i])
                {
                        continue;
                }
                arr2[k]=arr[i];
                k++;

        }
        for(i = 0; i<k; i++)
        {
                printf("%d ",arr2[i]);
        }
        return 0;
}

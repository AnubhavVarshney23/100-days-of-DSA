#include <stdio.h>
int main()
{
        int m,i,j,count;
        count=0;
        printf("what do you want your array size: ");
        scanf("%d", &m);
        printf("\n");
        int arr[m];
        printf("enter your array: \n");
        for(i=0;i<m;i++)
        {
                scanf("%d", &arr[i]);
        }
        int sum;
        for(i=0;i<m;i++)
        {
                sum = 0;
                for(j=i;j<m;j++)
                {
                        sum+=arr[j];
                        if(sum == 0)
                        {
                                count++;
                        }
                }
        }
        printf("no of sub arrays= %d",count);
}

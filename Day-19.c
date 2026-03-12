#include <stdio.h>
#include <stdlib.h>

int main()
{
        int m,i;
        printf("size of array: ");
        scanf("%d", &m);
        printf("\n");

        int arr[m], temp[m][m];

        printf("enter the array: ");
        for(i=0;i<m;i++)
        {
                scanf("%d", &arr[i]);
        }

        for(i=0;i<m;i++)
        {
                for(int j=0;j<m;j++)
                {
                        if(i==j){continue;}
                        temp[i][j] = arr[i] + arr[j];
                }
        }

        int ans = 1000000;  
        int a = arr[0], b = arr[1], j;

        for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        if(i==j){continue;}

                        if(abs(temp[i][j]) < ans)
                        {
                                ans = abs(temp[i][j]);
                                a = arr[i];
                                b = arr[j];
                        }
                }
        }

        printf("closest elements are : %d,%d", a, b);
        return 0;
}

#include <stdio.h>
int main()
{
        int m;
        printf("what would you like your matrix to be of ?x?: ");
        scanf("%d",&m);
        printf("\n");
        int arr[m];
        int i,j;
        for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        if(i==j)
                        {
                                printf("1");
                        }
                        printf("0");
                }
                printf("\n");
        }
}

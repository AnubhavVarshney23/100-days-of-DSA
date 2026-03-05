#include <stdio.h>
int main()
{
	int m,n;
	printf("put dimesntion of matrices: ");
	scanf("%d %d", &m, &n);
	int arr[m][n], arr2[m][n], ans_arr[m][n];
	int i,j;

	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element for %d,%d : \t",i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("now for 2nd array\n");
	for(i=0; i<m; i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("enter element for %d,%d : \t",i+1,j+1);
                        scanf("%d", &arr2[i][j]);
                }
        }
	
	for(i=0; i<m; i++)
        {
                for(j=0;j<n;j++)
                {
                	ans_arr[i][j]=arr[i][j]+arr2[i][j];
                }
        }

	printf("addition:-\n");
	for(i=0; i<m; i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d", ans_arr[i][j]);
                	printf(" ");
		}
		printf("\n");
        }


}

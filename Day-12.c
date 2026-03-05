#include <stdio.h>
int main(){
	int m,n;
	printf("enter the dimention of your matrix: ");
	scanf("%d %d", &m,&n);
	if (m!=n)
	{
		printf("asymmetric matrix\n");
		return 0;
	}
	int i, j, arr[m][n];

	printf("enter your matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
			if(arr[i][j] != arr[j][i])
			{
				printf("asymmetric\n");
				return 0;
			}
                }
        }

	printf("symmetric matrix\n");
	return 0;

}

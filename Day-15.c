#include <stdio.h>
int main()
{
        int m,n;
        printf("please enter the dimentions of you matrix: ");
        scanf("%d %d",&m,&n);
        printf("\n");
	int arr[m][n];
        int i,j;
	printf("please enter your matrix: ");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                	scanf("%d", &arr[i][j]);
                }
        }
	
	int ans=0; 

	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				ans+=arr[i][j];	
			}	
		}
	}

	printf("%d", ans);
}

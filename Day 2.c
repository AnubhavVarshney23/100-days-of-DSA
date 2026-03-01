#include <stdio.h>
#define N 6
int main()
{
        int arr[N];
        int del_ind, i;
        for(i=0; i<N-1; i++)
        {
                printf("\nenter your element number %d: ", i+1);
                scanf("%d", &arr[i]);
        }
        printf("\nenter the number index to be deleted: ");
        scanf("%d", &del_ind);
        if ((del_ind >= N) || (del_ind < 0))
        {
                printf("not valid index select between 1-5");
                return 0;
        }

        for (i=del_ind-1; i < N ; i++ )
        {
                arr[i]=arr[i+1];
        }

        printf("array is ");
        for (i=0; i<N-2; i++)
        {
                printf("%d ", arr[i]);
        }
        return 0;
}

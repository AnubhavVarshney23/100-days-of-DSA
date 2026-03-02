#include <stdio.h>
int main()
{
        int a,b;
        printf("enter the number of elements in the array: ");
        scanf("%d", &a);
        printf("\nenter the number of elemnts in the 2nd array: ");
        scanf("%d", &b);

        int arr1[a], arr2[b], i, j;
        for(i=0; i<a; i++)
        {
                printf("\nenter element number %d in 1st array: ", i+1);
                scanf("%d", &arr1[i]);
        }
        for(i =0; i< b; i++)
        {
                printf("\nenter element number %d in 2nd array: ", i+1);
                scanf("%d", &arr2[i]);
        }

        int k;
        k=a+b;
        int arr_main[k];
        k=0;
        i =0;

        while(i<a && j<b)
        {
                if (arr1[i] <= arr2[j])
                {
                        arr_main[k] = arr1[i];
                        i++;
                }
                else
                {
                        arr_main[k] = arr2[i];
                        j++;
                }
                k++;
        }
        while (i<a)
        {
                arr_main[k] = arr1[i];
                i++;
                k++;
        }
        while(j<b)
        {
                arr_main[k] = arr2[j];
                j++;
                k++;
        }

        for(i=0; i<k; i++)
        {
                printf("%d ", arr_main[i]);
        }
}

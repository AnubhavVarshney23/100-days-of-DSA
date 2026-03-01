#include <stdio.h>
int main()
{
        int i,s,search,c=1;
        printf("enter array size: ");
        scanf("%d", &s);

        int arr[s], found = 0;
        for(i=0; i<s; i++)
        {
                printf("\nenter your element number %d: ", i+1);
                scanf("%d", &arr[i]);
        }
        printf("enter element to search: ");
        scanf("%d", &search);
        for(i=0; i<s; i++)
        {
                if(arr[i] == search)
                {
                        printf("\nelement found at index %d", i);
                        found = 1;
                        break;
                }
                c= c+1;
        }
        if (found == 0){
                printf("\nno elements found");}
        printf("\ncomparisions done: %d\n", c);
        return 0;
}

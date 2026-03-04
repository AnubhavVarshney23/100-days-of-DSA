#include <stdio.h>
int main()
{
        char code[50],rev[50];
        int len=0, i;
        printf("enter the code(no spaces): ");
        scanf("%s", code);       //no spaces 
        for (i= 0; code[i] != '\0' ; i++)
        {
                len++;
        }
        for (i=len-1; i>=0; i--)
        {
                printf("%c", code[i]);
        }
        printf("\n");
        return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
        char str[50];
        int i,j;
        printf("enter a string: ");
        scanf("%s", str);
        i=0;
        j = strlen(str) -1;

        while (i<j){
                if (str[i] != str[j])
                {
                        printf("not a palindrome\n");
                        return 0;
                }
                i++;
                j--;
        }
        printf("is a palindrome");
        return 0;
}

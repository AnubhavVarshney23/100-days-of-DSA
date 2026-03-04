#include <stdio.h>
int main()
{
        int a,b,c,i,n;
        printf("which term of fibbonacci do you wanna print: ");
        scanf("%d", &n);

        printf("\nyour number is: ");
        i =1;
        b=1;//2nd
        c=1;
        a=0; //1st

        while(i<=n)
        {
                c = a+b;
                a=b;
                b=c;
                i = i+1;
        }
        printf("%d \n", a);
        return 0;
}

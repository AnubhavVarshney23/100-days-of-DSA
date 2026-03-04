#include <stdio.h>
int main()
{
        int a,b, copy, ans;
        printf("a^b first is a 2nd is b: ");
        scanf("%d %d", &a, &b);
        copy = b;
        ans = 1;
        while(copy != 0)
        {
                ans *=a;
                copy--;
        }
        printf("%d", ans);
        return 0;
}

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n+1];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int pos, x;
    printf("Enter position to insert (1-based): ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for(int i = n; i >= pos; i--)
        a[i] = a[i-1];

    a[pos-1] = x;

    printf("Updated array: ");
    for(int i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}

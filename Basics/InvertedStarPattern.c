#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n - i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

return 0;
}
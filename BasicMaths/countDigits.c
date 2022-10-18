#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int num;
    printf("Enter the number= ");
    scanf("%d", &num);
    while (num != 0)
    {
        for (int i = 0; i < num; i++)
        {
            num=num/10;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
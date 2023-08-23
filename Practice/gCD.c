#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int gcd;
    printf("enter=");
    scanf("%d", &num1);
    printf("enter=");
    scanf("%d",&num2);

    for (int i = 1; i <=num1 && i <=num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
       
    }
     printf("GCD= %d ",gcd);
     return 0;
}
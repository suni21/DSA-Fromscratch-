#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=i-1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i;k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
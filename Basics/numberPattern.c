#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
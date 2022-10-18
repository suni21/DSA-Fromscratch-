#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
    for(j=n;j>=1;j--)//prints top left of the pattern
    {
        if(j>i)
        printf("%d ",j);
        else
        printf("%d ",i);
    }
    for(j=2;j<=n;j++)//prints top right of the pattern
    {
        if(j>i)
        printf("%d ",j);
        else
        printf("%d ",i);
    }
    printf("\n");
    }
    for(i=1; i<=n; i++)
    {
    for(j=n;j>=1;j--)//prints left bottom of the pattern
    {
        if(j>i)
        printf("%d ",j);
        else
        printf("%d ",i);
    }
    for(j=2;j<=n;j++)//prints right bottom of the pattern
    {
        if(j>i)
        printf("%d ",j);
        else
        printf("%d ",i);
    }
    printf("\n");
    }
    return 0;
}

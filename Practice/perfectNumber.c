#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum=0,rem=0;

    for(int i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum+=i;
        }
    }

    if(sum==n){
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
    return 0;
}
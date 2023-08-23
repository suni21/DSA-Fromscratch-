#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
    int dp[n];
    if(n<=1)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
        
    return dp[n]= fibo(n-1)+fibo(n-2);
    
}
int main()
{
    int n;
    printf("enter=");
    scanf("%d", &n);

}
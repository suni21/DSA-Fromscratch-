#include<stdio.h>
#include<stdlib.h>

int main()
{
    //0 1 1 2 3 5 8 13 
    int n, num1=0,num2=1;
    int nextterm;
    scanf("%d", &n);
    printf("%d %d ", 0,1);

    for(int i=1;i<n;i++){
        nextterm=num1+num2;
        printf("%d ", nextterm);
        num1=num2;
        num2=nextterm;
    }
    
    return 0;
    
}

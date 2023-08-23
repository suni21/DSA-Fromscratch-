#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int rem=0, flag=0;
    printf("Enter year(XXXX)= ");
    scanf("%d", &num);
    if(num == 0)
    {
        return 0;
    }
    else{
        
        if(num%4==0||num%400==0)
        {
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("Leap year");
    }
    else{
        printf("Not a Leap year");
    }
 return 0;
}
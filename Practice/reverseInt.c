#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    char str;
    scanf("%d %s",&num, &str);
   
   
    int rev=0;

    while(num!=0)
    {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    printf("%d\n",rev);

//       char rev2=0;
//    while(str!=0)
//    {
//     int rem=str%10;
//     rev2=rev2*10+rem;
//     str=str/10;
//    } 
//     printf("%c\n",rev2);
    }
#include<stdlib.h>
#include<stdio.h>

int main(){
    int n1=0, n2=1,num; 
    int nextterm;
    scanf("%d ",&num);
    printf("%d %d ",0,1);
    for(int i=2;i<num;i++)
    {
        nextterm=n1+n2;
          printf("%d ",nextterm);
        n1=n2;
        n2=nextterm;
      
      
    }

    return 0;

}

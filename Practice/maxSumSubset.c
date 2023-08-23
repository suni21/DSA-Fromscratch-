#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int max=0,sum=0, count=0;
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ar[i]);
    } 

    for(int i=0;i<n;i++){
        if(ar[i]>0){
            sum+=ar[i];
            count++;
        }
        else{
            if(ar[i]>max||max==0)
            {
                max=ar[i];
            }
        }   
    }
    if(sum==0)
        {
            sum=max;
            count=1;
        }
    printf("sum=%d count=%d\n",sum, count);
    return 0;
}
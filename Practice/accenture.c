#include<stdio.h>
#include<stdlib.h>

int cal(int arr[], int n, int r, int unit)
{
    if(arr==NULL){
        return -1;
    }
    int totalfoodRequired=r*unit;
    int amountofFood=0;
    int i=0;
    
    for(i=0; i<n; i++)
    {
        amountofFood+=arr[i];
        // if(amountofFood>=totalfoodRequired)
        // {
        //     break;
        // }
    }
    if(totalfoodRequired>amountofFood)
    {
        return 0;
    }
    return i+1;
}

int main(){
    int n,r,unit;
    int arr[n];

    scanf("size= %d",&n);
    scanf("rat= %d",&r);
    scanf("unit= %d",&unit);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cal(arr,n,r,unit);
  return 0;
}
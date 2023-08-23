#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int ar[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)//compare
    {
        for(int j = 0; j < n - 1; j++)// compare and replace
        {
            if(ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
   
    printf("Enter= ");
    scanf("%d", &n);
 int ar[n];
    for(int i = 0; i < n-1; i++)
    {
        scanf("%d", &ar[i]);
    }
    bubbleSort(ar, n);

    for(int i = 0; i < n-1; i++)
    {
        printf("\n%d", ar[i]);
    }
    return 0;
}
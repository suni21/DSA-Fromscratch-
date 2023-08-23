#include <stdio.h>

int calculate (int r, int unit, int arr[], int n)
{
  if (n == 0)
    return -1;
  int totalFoodRequired = r * unit;
  int foodTillNow = 0;
  int house = 0;
  for (house = 0; house < n; ++house)
    {
      foodTillNow += arr[house];
      if (foodTillNow >= totalFoodRequired)
	{
	  break;
	}
    }
  if (totalFoodRequired > foodTillNow)
    return 0;
  return house + 1;
}

int main ()
{
  int r;
  printf("Rats=");
  scanf ("%d", &r);
  int unit;
   printf("Unit they consume=");
  scanf ("%d", &unit);
  int n;
   printf("Size=");
  scanf ("%d", &n);
  int arr[n];
   printf("array element=");
  for (int i = 0; i < n; ++i)
    {
      scanf ("%d", &arr[i]);
    }
  printf ("/n%d", calculate (r, unit, arr, n));
  return 0;
}
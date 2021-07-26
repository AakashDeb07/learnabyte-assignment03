#include <stdio.h>
double average(int a[], int n)
{
    int sum = 0,i;
    for (i=0; i<n; i++)
    {
       sum += a[i];
    }
    printf("Sum: %d",sum);
    printf("\nAverage: %f",(double)sum/n);
}
int main()
{
int n,arr[20],i;
   printf("Enter the size of array:");
   scanf("%d",&n);
   printf("Enter array elements:");
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   average(arr, n);
    return 0;
}

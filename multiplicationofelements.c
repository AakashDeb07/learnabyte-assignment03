#include <stdio.h>
int multi(int a[], int n)
{
    int m=1,i;
    for (i=0; i<n; i++)
    {
       m *= a[i];
    }
    printf("Output: %d",m);
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
   multi(arr, n);
}

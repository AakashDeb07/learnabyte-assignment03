#include<stdio.h>
int countOccurrences(int arr[], int n, int x)
{
    int res = 0,i;
    for (i=0; i<n; i++)
    {
        if (x == arr[i])
        {
          res++;
      }
  }
    printf("Output:%d",res);
}
int main()
{
   int x,n,arr[20],i;
   printf("Enter the size of array:");
   scanf("%d",&n);
   printf("Enter array elements:");
   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);
   }
   printf("Enter value:");
   scanf("%d",&x);
    countOccurrences(arr, n, x);
    return 0;
}

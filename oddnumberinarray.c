#include <stdio.h>
int evenno(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
      if(a[i]%2!=0)
      {
       printf("Output: %d\n",a[i]);
	  }
    }
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
   evenno(arr, n);
}

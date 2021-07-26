#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[20],i;
   printf("Enter the size of array:");
   scanf("%d",&n);
   printf("Input:");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
    int result[n];
    for (i = 0; i < n; i++) 
	{
        result[i] = a[i];
    }   
    int first = a[0];
    result[0] = a[n - 1];
    result[n - 1] = first;
    printf("Output: ");  
    print_array(result, n);        
 }  
  print_array(int parray[], int size)
    {
     int i;      
     for( i=0; i<size-1; i++)  
      {  
        printf("%d, ", parray[i]);  
       } 
    printf("%d ", parray[i]);  
    printf("\n");   
  } 


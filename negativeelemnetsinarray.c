#include<stdio.h>
int main()
{
    int arr[100],size,i;
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    } 
          
    printf("Negative Elements are:\n");
    for(i = 0; i < size; i++)
    {
          if(arr[i] < 0)
          {
            printf("%d\n",arr[i]);
          }
    }
    return 0;
}

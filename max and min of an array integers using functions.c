#include<stdio.h>
int minarray(int arr[],int size)
{
    int min=arr[0];
    int i;
    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int maxarray(int arr[],int size)
{
    int max=arr[0];
    int i;
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
   int i,n,min,max;
   int numbers[100];
   printf("enter the no of elements\n");
   scanf("%d",&n);
   printf("enter the array elements\n");
   for(i=0;i<n;i++)
        scanf("%d",&numbers[i]);
   min=minarray(numbers,n);
   max=maxarray(numbers,n);
   printf("minimum number is %d\n",min);
   printf("maximum number is %d\n",max);
   return 0;
}


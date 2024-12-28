#include <stdio.h>
#define MAX_SIZE 6
void linear_search(int[],int);
int main()
{   int arr[MAX_SIZE],i,element;
    printf("Enter %d elements for searching\n",MAX_SIZE);
    for(i=0;i<MAX_SIZE;i++)
    scanf("%d",&arr[i]);
    printf("Enter element to Search\n");
    scanf("%d",&element);
    linear_search(arr,element);
    return 0;}
void linear_search(int a[],int element)
{ int i;
    for(i=0;i<MAX_SIZE;i++)
    {if(a[i]==element)
        {printf("Linear Search %d is found at array %d \n",element,i+1);
            break;}}
            if(i==MAX_SIZE)
    printf("Search element %d not found \n",element);}

#include<stdio.h>
int main()
{
    int i,range;
    long int arr[25];
    printf("enter the range\n");
    scanf("%d",&range);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<range;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("the fibonacci series are\n");
    for(i=0;i<range;i++)
        printf("%ld ",arr[i]);
    return 0;
}

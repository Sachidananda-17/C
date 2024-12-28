#include<stdio.h>
int main()
{
    int n,i,count=0;
    i=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     if(n%i==0)
     {
         count++;
     }
    }
    if (count==0)
    {
        printf("the  number is a prime nmber");
    }
    else
    {
        printf("the number is not the prime number");
    }
    return 0;
}

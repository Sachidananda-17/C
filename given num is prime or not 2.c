#include<stdio.h>
int main()
{
    int n,i,factorial;
    factorial=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            factorial++;
    }
    if(factorial==2)
    {
        printf("the given num %d is a prime number",n);
    }
    else
    {
        printf("the given num %d is not the prime number",n);
    }
    return 0;
}

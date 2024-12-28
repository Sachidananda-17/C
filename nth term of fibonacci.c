#include<stdio.h>
int main()
{
    int n,a=0,b=1,d;
    printf("enter the value of n\n");
    scanf("%d",&n);
    if(n==1)
        d=0;
    else
        d=a+b;
    for(int i=3;i<n;i++)
    {
        a=b;
        b=d;
        d=a+b;
    }
    printf("the %dth term of fibonacci series is %d",n,d);
    return 0;
}

//1+1/2+1/3+1/4+.....+n
#include<stdio.h>
int main()
{
    double n,s=0,i;
    printf("enter the range\n");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(1/i);
    }
    printf("the sum of given series is %.2lf",s);
}

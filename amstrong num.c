#include <stdio.h>

int main()
{
    int n,r,s=0,m;
    printf("enter a number=");
    scanf("%d", &n);
    m=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(m==s)
    printf(" the given num %d is a amstrong number",m);
    else
    printf("the given num %d is not a amstrong number",m);
    return 0;
}

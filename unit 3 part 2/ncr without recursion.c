#include<stdio.h>
int fact(int);
void main()
{
    int n,r,ncr;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of r\n");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("value of %dc%d=%d",n,r,ncr);

}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

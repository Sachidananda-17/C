//1+1/2!+1/3!+1/4!+....+n
#include<stdio.h>
int main()
{
    int n,i,f=1;
    double s=0;
    printf("enter the range\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
        s+=1.0/(double)f;
    }
    printf("the sum of the series=%.2lf",s);
}

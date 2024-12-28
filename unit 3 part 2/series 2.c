//1/2+2/3+3/4+....+n
#include<stdio.h>
int main()
{
    int n;
    double s=0,i;
    printf("enter the range number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i/(i+1);
    }
    printf("the sum of the series is=%.2lf",s);
}

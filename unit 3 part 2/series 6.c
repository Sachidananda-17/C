//1/2+3/4+5/6+.....+n
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=2*n;i+=2)
    {
        sum+=(float)i/(i+1);
    }
    printf("sum of the series=%.2f",sum);
    return 0;
}

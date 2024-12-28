//1/x+1/x^2/+1/x^3...+n
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    float sum=0;
    scanf("%d%d",&n,&x);
    for(int i=1;1<=n;i++)
    {
        sum+=(float)1/(pow(x,i));
    }
    printf("sum of series=%.2f",sum);
    return 0;
}

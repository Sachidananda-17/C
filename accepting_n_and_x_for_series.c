#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    float sum=0;
    printf("enter the value on n and x\n");
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        sum+=(float)1/(pow(x,i));
    }
    printf("sum of series =%.2f",sum);
    return 0;
}

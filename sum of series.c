#include<stdio.h>
int main()
{
    int i,x,n;
    float sum=0;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=(float)(x*(2*i-1))/(2*i);
    }
    printf("the sum of the series 1x/2 + 3x/4 + 5x/6 .... to the terms entered by the user is %f",sum);
    return 0;
    }

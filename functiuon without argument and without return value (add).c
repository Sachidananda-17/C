#include<stdio.h>
void sum();
int main()
{
    printf("to calculate sum of the numbers\n");
    sum();
    return 0;
}
void sum()
{
    int a,b,sum;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is %d",sum);
}

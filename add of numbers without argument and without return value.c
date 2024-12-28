#include<stdio.h>
void sum();
int main()
{
    printf("to calculate the sum of two numbers\n");
    sum();
    return 0;
}
void sum()
{
    int a,b;
    printf("enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("the sum of %d and %d is %d",a,b,a+b);
}

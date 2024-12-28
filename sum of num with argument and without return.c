#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int x,int y)
{
    int c=x+y;
    printf("the sum of two numbers is %d\n",c);
}

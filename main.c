#include<stdio.h>
int abc(int,int);
int main()
{
    int num1,num2;
    printf("enter the 2 positive numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("the required output is %d\n",abc(num1,num2));
    return 0;
}
int abc(int a,int b)
{
    if(b!=0)
    return abc(b,a%b);
    else
    return a;
}
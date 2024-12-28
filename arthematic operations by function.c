#include<stdio.h>
int add(int,int);
int diff(int,int);
int pro(int,int);
int quo(int,int);
int rem(int,int);
int main()
{
    int num1,num2,sum,sub,mul,div,mod;
    printf("enter the value of num1,num2\n");
    scanf("%d%d",&num1,&num2);
    sum=add(num1,num2);
    sub=diff(num1,num2);
    mul=pro(num1,num2);
    div=quo(num1,num2);
    mod=rem(num1,num2);
    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    printf("the diff of %d and %d is %d\n",num1,num2,sub);
    printf("the pro of %d and %d is %d\n",num1,num2,mul);
    printf("the quo of %d and %d is %d\n",num1,num2,div);
    printf("the rem of %d and %d is %d\n",num1,num2,mod);
;    }
    int add(int a,int b)
    {
        int c=a+b;
        return c;
    }
    int diff(int a,int b)
    {
        int c=b-a;
        return c;
    }
    int pro(int a,int b)
    {
        int c=a*b;
        return c;
    }
    int quo(int a,int b)
    {
        int c=a/b;
        return c;
    }
    int rem(int a,int b)
    {
        int c=a%b;
        return c;
    }

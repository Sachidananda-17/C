#include<stdio.h>
int add (int,int);
int main()
{
    int num1,num2,sum;
    printf("enter the value of num1,num2\n");
    scanf("%d%d",&num1,&num2);
    sum=add(num1,num2);
    printf("the sum of numbers is %d",sum);
}
int add(int a,int b)
 {
    int c;
    c=a+b;
    return c;
 }

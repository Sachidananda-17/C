#include<stdio.h>
int main()
{
    int num1,num2,quotient,remainder;
    printf("enter the value of two numbers\n");
    scanf("%d%d",&num1,&num2);
    quotient=num1/num2;
    printf("the quotient when %d/%d is %d\n",num1,num2,quotient);
    remainder=num1%num2;
    printf("the remainder when %d/%d is %d\n",num1,num2,remainder);
    return 0;
}

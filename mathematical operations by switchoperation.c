#include <stdio.h>
int main()
{
int a,b;
char operand;
double mathematicaloperation;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("enter the operand from the following\n");
printf("+\n -\n *\n /\n %%\n ");
scanf(" %c",&operand);
switch(operand)
{
 case'+':;
 mathematicaloperation=a+b;
 printf("the value of %d+%d=%.1lf",a,b,mathematicaloperation);
 break ;
 case '-':;
 mathematicaloperation=a-b;
 printf("the value of %d-%d=%.1lf",a,b,mathematicaloperation);
 break ;
 case '*':;
 mathematicaloperation=a*b;
 printf("the value of %d*%d=%.1lf",a,b,mathematicaloperation);
 break ;
 case '/':;
 mathematicaloperation=a/b;
 printf("the value of %d/%d=%.1lf",a,b,mathematicaloperation);
 break ;
 case '%':;
 mathematicaloperation=a%b;
 printf("the value of %d % %d=%.1lf",a,b,mathematicaloperation);
 break ;
 default :
    printf("invalid input");
}
    return 0;
}



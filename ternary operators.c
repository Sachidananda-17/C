#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter the values of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the largest among %d,%d and %d  is %d",a,b,c,big);
    return 0;
}

#include<stdio.h>
int main()
{
    int  celsius,fahrenhiet;
    printf("enter the celsius temperature\n");
    scanf("%d",&celsius);
    fahrenhiet=((celsius*9)/5)+32;
    printf("the value of celsius temperature %d C in fahrenhiet is %d F",celsius,fahrenhiet);
    return 0;
}

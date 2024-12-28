#include<stdio.h>
int main()
{
    float num;
    printf("enter the number\n ");
    scanf("%f",&num);
    if(num>0)
    {
        printf("the given num %f is positive number",num);
    }
    else if(num==0)
    {
        printf("the given num %f is equal to zero",num);
    }
    else if(num<0)
    {
        printf("the given number %f is negative number",num);
    }
    return 0;
}

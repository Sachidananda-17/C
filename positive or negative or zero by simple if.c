#include<stdio.h>
int main()
{
    float number;
    printf("enter the number\n");
    scanf("%f",&number);
    if(number>0)
    {
        printf("the given number %.1f is the positive number",number);
    }
    if(number==0)
    {
        printf("the given number %.1f is equal to neutral",number);
    }
    if(number<0)
    {
        printf("the given number %.1f is the negative  number",number);
    }
    return 0;
}

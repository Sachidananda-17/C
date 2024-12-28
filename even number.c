#include<stdio.h>
int main()
{
    int num;
    printf("enter the value of num\n");
    scanf("%d",&num);
    if(num%2==0 && num>0)
    {
        printf("the given number %d is even number",num);
    }
    else
    {
     printf("the given number %d is odd number",num);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,r,sum,temp;
    sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("the given number  is a palindrome number");
    }
    else
    {
        printf("the given number is not a palindrome number");
    }
    return 0;
}

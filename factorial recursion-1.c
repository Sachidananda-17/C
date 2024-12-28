#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%d",f );
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

/*sachidananda Manideep.K AP21110010475 fibonacci using recursion*/
#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,fib;
    printf("enter the term of fibonacci no\n");
    scanf("%d",&n);
    fib=fibonacci(n);
    printf("the %d fibonacci number is %d\n",n,fib);
}
int fibonacci(int n)
{
    int fib;
    if(n>2)
        fib=fibonacci(n-1)+fibonacci(n-2);
    else if(n==2)
        fib=1;
    else
        fib=0;
    return fib;
}

#include<stdio.h>
int check(int);
int main()
{
    int n,result;
    printf("enter a number\n");
    scanf("%d",&n);
    result=check(n);
    if(result==0)
    printf("the number is even");
    else
    printf("the number is odd");
    return 0;
}
int check(int x)
{
    if(x%2==0)
    return 0;
    else
    return 1;

}

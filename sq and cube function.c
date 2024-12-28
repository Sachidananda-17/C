#include<stdio.h>
int square(int);
 int cube(int);
int main()
{
    int n,sq,cu;
    printf("enter the value of n\n");
    scanf("%d",&n);
    sq=square(n);
    cu=cube(n);
    printf("the square and cube of %d is %d and %d",n,sq,cu);
}
int square(int a)
{
    int s;
    s=a*a;
    return s;
}
int cube(int b)
{
    int c;
    c=b*b*b;
    return c;
}

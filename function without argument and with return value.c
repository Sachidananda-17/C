#include<stdio.h>
int difference();
int main()
{
    int sub;
    sub=difference();
    printf("the difference of two num is %d\n",sub);
    return 0;
}
 int difference()
{
    int a,b,sub;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sub=b-a;
    return sub;
}

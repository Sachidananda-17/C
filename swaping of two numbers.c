#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a and b\n");
    scanf("%d\n%d",&a,&b);
    printf(" the values of a and b before swapping\n the value of a =%d\n the value of b =%d\n",a,b);
    c=a;
    a=b;
    b=c ;
    printf("the values of a and b after swapping\n the value of a=%d\n the value of b=%d",a,b);
    return 0;
}

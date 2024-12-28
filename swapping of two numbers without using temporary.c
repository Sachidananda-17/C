#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("the value of a and b before swaping is\n a=%d\n b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values of a and b after swapping is\n a=%d\n b=%d\n",a,b);
    return 0;
    }

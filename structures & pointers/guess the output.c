#include<stdio.h>
int main()
{
    int a[]={5,16,7,89,45,32,23,10};
    int*p=&a[1],*q=&a[5];
    printf("%d\t",*(p+3));
    printf("%d\t",*(q-3));
    printf("%d\t",q-p);
    printf("%d\t",p<q);
    printf("%d\t",*p<*q);
    return 0;
}
/* 45 7 4 1 1
   45 4 7 1 1
   45 7 4 1 0
   45 7 4 0 1*/

#include<stdio.h>
int main()
{
    int a[]={20,25,15,27,105,96};
     int *x,*y;
     x=&a[3];
     y=&a[5];
    printf("%d\n",x<=y);
    printf("%d\n",x>=y);
    y=&a[3];
    printf("%d\n",x==y);
    return 0;
}

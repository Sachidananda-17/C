#include<stdio.h>
int area();
int main()
{
    int ar,a;
    ar=area();
    printf("the area of sq of  is %d\n",ar);
    return 0;
}
int area()
{
    int a,ar;
    printf("enter the value of side\n");
    scanf("%d",&a);
    ar=a*a;
    return ar;
}

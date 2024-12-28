#include<stdio.h>
float area();
int main()
{
    float a;
    a=area();
    printf("the area is %.2f\n",a);
    return 0;
}
float area()
{
    float r,a;
    printf("enter the value of radius\n");
    scanf("%f",&r);
    a=3.14*r*r;
    return a;
}

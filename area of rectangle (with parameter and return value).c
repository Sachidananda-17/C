#include<stdio.h>
float area(float,float);
int main()
{
    float l,b,a;
    printf("enter the value of length and the breadth\n");
    scanf("%f %f",&l,&b);
    a=area(l,b);
    printf("the area is %.2f\n",a);
    return 0;
}
float area(float x,float y)
{
    return x*y;
}

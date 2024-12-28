#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("enter the value of length\n");
    scanf("%f",&length);
    printf("enter the value of breadth\n");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area of rectangle is %f sq.units\n",area);
    printf("perimeter of rectangle is %f c.m\n",perimeter);
    return 0;
}
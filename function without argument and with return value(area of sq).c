#include<stdio.h>
float sq();
int main()
{ float area;
    printf("to calculate the area of the square\n");
    area=sq();
    printf("the area of square %.2f\n",area);
    return 0;

}
float sq()
{
    float side,sq;
    printf("enter the side of the square\n");
    scanf("%f",&side);
    sq=side*side;
    return sq;
}


#include<stdio.h>
int main()
{
   int s,area_of_square;
   float r,area_of_circle;
   printf("enter the radius\n");
   scanf("%f",&r);
   printf("enter the side\n");
   scanf("%d",&s);
   area_of_circle=2*3.14*r;
   area_of_square=s*s;
   printf("the area of circle=%.2f\n",area_of_circle);
   printf("the area of square=%d",area_of_square);
}


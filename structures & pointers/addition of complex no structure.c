#include<stdio.h>
struct complex{
float real;
float imaginary;};
int main()
{
    struct complex c1,c2,sum;
    printf("enter the real and imaginary values of c1\n");
    scanf("%f %f",&c1.real,&c1.imaginary);
    printf("the first complex number is %.2f+i%.2f\n",c1.real,c1.imaginary);
    printf("enter the real and imaginary values of c2\n");
    scanf("%f%f",&c2.real,&c2.imaginary);
    printf("the second complex number is %.2f+i%.2f\n",c2.real,c2.imaginary);
    sum.real=c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;
    printf("sum of two complex numbers is %.2f+i%.2f",sum.real,sum.imaginary);
    return 0;
}

#include<stdio.h>
struct complex{
float real;
float imag;
}a,b,prod;
int main()
{
    printf("enter the real and imaginary coefficients of complex no\n");
    scanf("%f%f",&a.real,&a.imag);
    printf("enter the real and imaginary coefficients of complex no\n");
    scanf("%f%f",&b.real,&b.imag);
    prod.real=(a.real*b.real)-(a.imag*b.imag);
    prod.imag-(a.real*b.imag)+(a.imag*b.real);
    printf("the first complex no is %.2f+i%.2f\n",a.real,a.imag);
    printf("the second complex no is %.2f+i%.2f\n",b.real,b.imag);
    printf("the product complex no is %.2f+i%.2f\n",prod.real,prod.imag);

}

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("enter the co-efficients of a,b,c\n");
    printf("enter the co-efficient of a\n ");
    scanf("%f",&a);
    printf("enter the co-efficient of b\n");
    scanf("%f",&b);
    printf("enter the co-efficient of c\n");
    scanf("%f",&c);
    d=(b*b)-4*a*c;
    printf("the value of discriminant for the given co-efficients is %.2f\n",d);
    if(d>0)
    {
    printf("the quadratic equation has real and distinct roots\n");
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("roots of the q-equation are %.2f and %.2f",root1,root2);
    }
    else if(d==0)
    {
        printf("the roots of the q-equation are equal\n");
        root1=root2=-b/2*a;
        printf("the roots of the q-equation are %.2f and %.2f",root1,root2);
    }
    else
    {
        printf("the roots of the q-equation are imaginary\n");
        root1=-b/2*a;
        root2=(sqrt(-d))/2*a;
        printf("the roots of the q-equation are %.2f+ i(%.2f) and  %.2f-i(%.2f)",root1,root2,root1,root2);
    }
    return 0;
}

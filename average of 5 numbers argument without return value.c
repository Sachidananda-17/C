#include<stdio.h>
void average(int,int,int,int,int);
int main()
{
    int a,b,c,d,e;
    printf("enter the five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(int a,int b,int c,int d,int e)
{
    float average;
    average=(float)(a+b+c+d+e)/5;
    printf("avg of 5 numbers is %.2f",average);
}

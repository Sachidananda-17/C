#include<stdio.h>
void display(int[],int);
void main()
{
    int i,n,a[20];
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements are\n");
    display(a,n);
}
void display(int p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",p[i]);
}

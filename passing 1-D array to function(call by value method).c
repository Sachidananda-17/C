#include<stdio.h>
void display(int);
void main()
{
    int i,n,a[10];
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the no  elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements are\n");
    for(i=0;i<n;i++)
    display(a[i]);
}
void display(int p)
{
    printf("%d\t",p);
}

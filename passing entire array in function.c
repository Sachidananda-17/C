#include<stdio.h>
void display(int[],int);
int main()
{
    int i,n,a[10];
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
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
    
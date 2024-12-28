#include<stdio.h>
int maximum(int,int);
int minimum(int,int);
int main()
{
    int a,b,min,max;
    printf("enter the two numbers\n");
    scanf("%d%d",&a,&b);
    max=maximum(a,b);
    min=minimum(a,b);
    printf("maximum number is %d\n",max);
    printf("minimum number is %d\n",min);
    return 0;
}
int maximum(int x,int y)
{
    return(x>y)?x:y;
}
int minimum(int x,int y)
{
    return(x<y)?x:y;
}

#include<stdio.h>
int main()
{
    int n,i,cube=1,square=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the square of numbers upto %d is as follows\n",n);
    for(i=1;i<n+1;i++)
    {
        square=1*(i*i);
        printf(" the square of %d is %d\n",i,square);
    }
    printf("the cube of  numbers upto %d  is as follows\n",n);
     for(i=1;i<n+1;i++)
    {
        cube=1*(i*i*i);
        printf(" the cube of %d is %d\n",i,cube);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int n ,i;
    i=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the multiplication table of %d is\n",n);
    do
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    while(i<=10);
    return 0;

}

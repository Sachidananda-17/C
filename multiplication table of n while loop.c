#include<stdio.h>
int main()
{
    int n,i;
    i=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the multiplication table of %d is\n",n);
    while(i<10)
    {
        i+=1;
    printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;

}

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the multiplication table of %d is as follows:\n",n);
    for(i=1;i<10;i+=1)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}

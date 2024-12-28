#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the even numbers upto %d are\n",n);
    for(i=0;i<=n;i+=2)
    {
        if(i%2==0);
        printf("%d\n",i);
    }
    return 0;
}

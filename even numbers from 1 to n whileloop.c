#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    i==1;
    printf("the even numbers upto %d are\n",n);
    while(i<=n)
    {
        if(i%2==0)
            printf("%d\n",i);
        i++;
    }
    return 0;
}

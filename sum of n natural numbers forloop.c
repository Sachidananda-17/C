#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(a=0;a<=n;a++)
    {
        sum=sum+a;
    }
    printf("the sum of %d natural numbers is %d",n,sum);
return 0;
}

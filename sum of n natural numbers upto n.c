#include<stdio.h>
int main()
{
    int n,a,sum=0;
    a==0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the sum of %d natural numbers is \n",n);
    do
    {
        sum=sum+a;
        a++;
    }
    while(a<=n);
    printf("%d",sum);
        return 0;
}

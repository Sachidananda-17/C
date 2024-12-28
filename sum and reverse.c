#include <stdio.h>
int main()
{
    int n,r,rev=0,sum=0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (int i=0;n>0;i++)
    {
        r=n%10;
        rev=rev*10 +r;
        n=n/10;
        sum=sum+r;
    }
    printf("Reversed number= %d\n", rev);
    printf("Sum of digits=%d", sum);
    return 0;
}

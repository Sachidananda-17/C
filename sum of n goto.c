#include <stdio.h>

int main()
{
    int n; int sum=0; int i=1;
    printf("enter the value of n\n");
    scanf("%d", &n);
    add: if(i<=n)
    {
        sum=sum+i;
        i++;
    goto add;
    }
    printf(" the sum of %d numbers is\n sum =%d",n, sum);
    return 0;
}

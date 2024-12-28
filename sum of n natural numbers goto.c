#include <stdio.h>

int main()
{
    int n,sum=0,  i=1;
    printf("enter the value of n\n");
    scanf("%d", &n);
    add: if(i<=n)
    {
        sum=sum+i;
        i++;
    goto add;
    }
    printf("the sum of %d numbers is sum =%d",n,sum);
    return 0;
}

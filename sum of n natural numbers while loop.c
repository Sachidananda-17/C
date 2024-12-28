#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a value of n:\n ");
    scanf("%d", &n);
    i = 1;

    while (i <= n)
        {
        sum += i;
        ++i;
    }

    printf("the value of sum of numbers upto %d is %d",n,sum);
    return 0;
}


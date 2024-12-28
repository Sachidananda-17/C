#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>=i;--i)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,j;
    i=1,
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=2*(n-i)+1;j>1;j-=2)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

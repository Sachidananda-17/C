#include<stdio.h>
int prime(int);
int main()
{
    int n,result;
    printf("enter the value of n where the prime numbers has to be printed\n");
    scanf("%d",&n);
    result=prime(n);
    return 0;
}
int prime(int x)
{
    int i,j;
    for(i=0;i<=x;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
            printf("%d\n",i);
    }
}

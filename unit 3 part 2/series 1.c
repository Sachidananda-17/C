//1+3+5+7+9+.....+n
#include<stdio.h>
int main()
{
    int n,s=0,i=1;
    printf("enter the range of number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i+=2;
    }
    printf("the sum of the series=%d",s);
    return 0;
}

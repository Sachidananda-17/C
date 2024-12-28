//1+2-3+4-5+6-7+..+n
#include<stdio.h>
int  main()
{
    int n,s=0,i;
    printf("enter the range\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            s+=i;
        else
            s-=i;
    }
    printf("the sum of the series=%d",s);
}

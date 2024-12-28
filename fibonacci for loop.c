#include<stdio.h>
int main()
{
    int n,i,t1,t2,nextterm;
    t1=0;
    t2=1;
    nextterm=t1+t2;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the fibonacci  sequence upto %d are\n",n);
    printf("%d,%d,%d,",t1,t2,t2);
    for(i=4;i<=n;i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
        printf("%d,",nextterm);
    }
    return 0;
}

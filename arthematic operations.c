#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,quo,rema;
    printf("enter values of a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    rema=a%b;
     printf("the sum of %d and %d is %d\n",a,b,sum);
     printf("the diff of a and b is %d\n",diff);
     printf("the pro of a and b is %d\n",pro);
     printf("the quo of a and b is%d\n",quo);
     printf("the rema of a and b is%d\n",rema);
     return 0 ;
}

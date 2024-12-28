#include<stdio.h>
int main()
{
     int n,i,fac;
     fac=1;
     printf("enter the value of n\n");
     scanf("%d",&n);
     for(i=n;i>=1;i--)
     {
         fac=fac*i;
     }
     printf("the factorial of %d is %d",n,fac);
     return 0;

}

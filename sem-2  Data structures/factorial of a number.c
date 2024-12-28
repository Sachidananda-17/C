/*sachidananda manideep.k AP21110010475 factorial of a number by iteration*/
#include<stdio.h>
int main()
{
     int n,i,fac;
     fac=1;
     printf("enter the value of n\n");
     scanf("%d",&n);
     if(n>=1)
     {
         for(i=n;i>=1;i--)
     {
         fac=fac*i;

     }
     printf("the factorial of %d is %d",n,fac);
     }
     else if(n==0)
     {
         printf("factorial of 0 is 1");
     }
     else
     {
         printf("enter the valid n value");
     }
     return 0;

}

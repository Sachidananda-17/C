#include <stdio.h>
int main()
{
    int x,y,quo=0,rem=0;
    printf("Enter the values of x and y\n");
     scanf("%d\n %d",&x,&y);
     if(y==0)
     {
         printf("div is not possible\n");
     }
     while(x>=y) {
            x=x-y;
     quo++;
     }
     rem=x;
     printf("quo is: %d and rem is %d",quo,rem);
     return 0;
}

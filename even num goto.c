#include <stdio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    if(n%2==0)
    goto evennumber;
    else
    goto oddnumber;
    evennumber: printf(" given number %d is even",n);
    return 0;
    oddnumber:printf(" given number %d  is odd",n);
    return 0;
}

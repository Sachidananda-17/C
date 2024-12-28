#include <stdio.h>

int main()
{
    int i,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("Even number from 1 to %d are\n",n);

    i=1;
    do{
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    while(i<=n);
    return 0;
}

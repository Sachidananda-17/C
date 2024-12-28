#include<stdio.h>
int main()
{
    int n,i;
    i=1;
    printf("the even numbers excluding 500 are\n");
    for(i=1;i>0;i++)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }
        if(i==480)
        break;
    }
    return 0;
}

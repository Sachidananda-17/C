#include<stdio.h>
int main()
{
    for(int i=1;i>0;i++)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }
        if(i==500)
            break;
    }
    return 0;
}

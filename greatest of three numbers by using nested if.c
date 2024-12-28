#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest among three",a);
    }
    if(b>c && b>a)
    {
        printf("%d is the greatest among three",b);
    }
    else
    {
        printf("%d is the greatest among three",c);
    }
    return 0;
}

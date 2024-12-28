#include<stdio.h>
int main()
{
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    {
        printf("the given character %c is alphabet",c);
    }
    else if(c>='A'&&c<='Z')
    {
        printf("the given character %c is alphabet",c);
    }
    else
    {
        printf("the given character %c is not the alphabet",c);
    }
    return 0;
}

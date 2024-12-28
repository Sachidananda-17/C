#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    {
        printf("the given character %c is a alphabet",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
       printf("the given character %c is a digit",ch);
    }
    else
    {
     printf("the given character %c is a special symbol",ch);
    }
    return 0;
}



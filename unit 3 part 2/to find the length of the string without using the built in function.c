#include<stdio.h>
int main()
{
    char s[50];
    int length=0;
    printf("enter the string\n");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        length++;
    }
    printf("the length of the string is %d\n",length);
}

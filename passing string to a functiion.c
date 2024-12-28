#include<stdio.h>
void display(char[]);
int main()
{
    char s[30];
    printf("enter the strings\n");
    scanf("%s",s);
    printf("the string is\n");
    display(s);
}
void display(char p[])
{
    printf("%s\n",p);
}

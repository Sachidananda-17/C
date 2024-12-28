#include<stdio.h>
void display(char[]);
int main()
{
    int s[30];
    printf("enter a string\n");
    scanf("%s",s);
    printf("the string is \n");
    display(s);
    return 0;
}
void display(char p[])
{
    printf("%s\n",p);
}

#include<stdio.h>
int main()
{
    char strl[100];
    int i,length=0;
    printf("enter the string\n");
    gets(strl);
    for(i=0;strl[i]!='\0';i++)
    {
        length++;
    }
    printf("the length of the string is %d",length);
    return 0;
}

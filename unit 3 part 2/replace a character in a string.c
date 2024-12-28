#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="SRM UNIVERSITY ANDHRA PRADESH";
    char ch='-';
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
            string[i]=ch;
    }
    printf("the string before replacing the spaces with the character \nSRM UNIVERSITY ANDHRA PRADESH\n");
    printf("string after replacing the spaces with given character\n");
    printf("%s",string);
    return 0;
}

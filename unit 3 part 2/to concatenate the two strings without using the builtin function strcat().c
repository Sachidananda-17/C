#include<stdio.h>
#include<string.h>
void concat(char[], char[]);
int main()
{
    char s1[50],s2[50];
    printf("enter the string 1\n");
    scanf("%s",s1);
    printf("enter the string 2\n");
    scanf("%s",s2);
    concat(s1,s2);
    return 0;
}
void concat(char a1[],char a2[])
{
    int i,j;
    i=strlen(a1);
    for(j=0;a2[j]!='\0';i++,j++)
    {
        a1[i]=a2[j];

    }
    a1[i]='\0';
    printf("concated string is %s \n",a1);
}

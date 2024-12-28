#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i;
    printf("enter the first string\n");
    gets(str1);
    printf("enter the second string\n");
    gets(str2);
    for(i=0;str1[i]==str2[i]&& str1[i]=='\0';i++);
    if(str1[i]<str2[i])
    {
        printf("str1 is lessthan str2\n");
    }
    else if(str1[i]>str2[i])
    {
        printf("str1 is greaterthan str2\n");
    }
    else
    {
        printf("str1 is equal to str2");
    }
    return 0;
}

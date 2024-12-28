#include<stdio.h>
int main()
{
    char str1[100],str2[50];
    int i;
    printf("enter the string 1\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("copied string(str2) is %s",str2);
    return 0;
}

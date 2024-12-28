#include<stdio.h>
#include<string.h>
void main()
{
    char string[25],rstring[25];
    int i,l=0,f=0;
    printf("enter the string\n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        l++;
    }
    printf("the length of the string '%s'=%d\n",string,l);
    for(i=l-1;i>=0;i--)
    {
        rstring[l-i-1]=string[i];
    }
    for(f=1,i=0;i<l;i++)
    {
        if(rstring[i]!=string[i])
            f=0;
    }
    if (f==1)
        printf("%s is a palindrome\n",string);
    else{
        printf("%s is not a plandrome\n",string);
    }
}

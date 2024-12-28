#include<stdio.h>
#include<string.h>
int main()
{
    char name1[]="sachidananda",name2[]="manideep";
    if(strncmp(name1,name2,3)==0)
    printf("values are same");
    else
    printf("values are not same");
    return 0;
}

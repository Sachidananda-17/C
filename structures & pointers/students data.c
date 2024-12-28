#include<stdio.h>
#include<string.h>
struct student{
char name[50];
char clg[50];
int roll;}s1,s2;
int main()
{
    printf("enter name-college name-roll no \n");
    scanf("%s%s%d",s1.name,s1.clg,&s1.roll);
    printf("enter name-college name-roll no \n");
    scanf("%s%s%d",s2.name,s2.clg,&s2.roll);
    printf("student 1\n name-%s\n college name-%s\n roll-no-%d\n",s1.name,s1.clg,s1.roll);
    printf("student 2\n name-%s\n college name-%s\n roll-no-%d\n",s2.name,s2.clg,s2.roll);
    return 0;
}

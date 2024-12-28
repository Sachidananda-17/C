#include<stdio.h>
struct student{
int rollno;
char name[10];
char sec;
}st[5];
int main()
{
    int i;
    printf("enter the roll no of the student\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&st[i].rollno);
    }
     printf("enter the name of the student\n");
     for(i=1;i<=5;i++)
     {
         scanf("%s",st[i].name);
     }
     printf("enter the section\n");
     for(i=1;i<=5;i++)
     {
         scanf("%c",&st[i].sec);
     }
     printf("the details of the students\n");
     for(i=1;i<=





     5;i++)
     {
         printf("roll no:-%d\t",st[i].rollno);
         printf("\nname:-%s\t",st[i].name);
         printf("\n sec:-%c\t",st[i].sec);
     }
     return 0;
}

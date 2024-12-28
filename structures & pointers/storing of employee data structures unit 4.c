#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[50];
float salary;}e1,e2;
int main()
{
    e1.id=101;
    strcpy(e1.name,"sonu");
    e1.salary=56000;
    printf("enter the second employee id\n");
    scanf("%d",&e2.id);
    printf("enter the second employee name\n");
    scanf("%s",e2.name);
    printf("enter the second employee salary\n");
    scanf("%.2f",&e2.salary);
    printf("\t...employee 1...\t");
    printf("\nid=%d\n",e1.id);
    printf("name=%s\n",e1.name);
    printf("salary=%.2f\n",e1.salary);
    printf("\n\t...employee 2...\t");
    printf("\nid=%d\n",e2.id);
    printf("name=%s\n",e2.name);
    printf("salary=%f.2",e2.salary);
    return 0;
}

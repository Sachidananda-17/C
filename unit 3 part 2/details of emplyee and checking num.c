#include<stdio.h>
#include<strings.h>
#define ll long long int
struct details{
char name[50];
char city[15];
char email[100];
long  num;}e1,e2;
int main()
{
    printf("enter name-city-email-id-mobile number of the employee 1 \n");
    scanf("%s %s %s %lld",e1.name,e1.city,e1.email,&e1.num);
    printf("enter name-city-email-id-mobile number of the employee 2 \n");
    scanf("%s %s %s %lld",e2.name,e2.city,e2.email,&e2.num);
    if(e1.num==e2.num)
    {
        printf("existing user \n");
        printf("re-enter the mobile num\n");
        scanf("%lld",&e2.num);
    }
    else
   printf("different user\n");
   printf("employee1\n name-%s\n city-%s\n email-id-%s\n mobile number-%lld\n",e1.name,e1.city,e1.email,e1.num);
printf("employee2\n name-%s\n city-%s\n email-id-%s\n mobile number-%lld\n",e2.name,e2.city,e2.email,e2.num);
return 0;
}

#include<stdio.h>
int main()
{
    int age;
    printf("enter the value of the age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("the person is eligible for voting ",age);
    }
    else
    {
        printf("the person is not eligible for voting",age);
    }

}

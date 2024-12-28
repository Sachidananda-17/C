#include<stdio.h>
int main()
{
    int marks[5],i;
    printf("enter the marks of the  5 students\n");
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&marks[i]);
    }
    printf("the marks of the 5 students are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;

}

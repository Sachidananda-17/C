
#include <stdio.h>
int main()
{
int y;
printf("enter the year\n");
scanf("%d",&y);
if(y%400==0||(y%100!=0&&y%4==0))
{
printf("the given year is leap year");
}
else
{
    printf("the given year is not the leap year");
}
return 0;
}

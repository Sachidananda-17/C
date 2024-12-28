#include<stdio.h>
int main()
{
    int marks;
    // user has to enter the marks of the student//
    printf("enter the marks of the student\n");
    scanf("%d",&marks);
    if(marks<=100&&marks>=91)
    {
        printf("grade for the marks %d is 'A+'\n ",marks);
    }
    else if(marks>=71&& marks<=90)
    {
        printf("grade for the  marks %d is 'A'\n ",marks);
    }
    else if( marks>=61&& marks<=70)
    {
        printf("grade for the marks %d is 'B+'\n",marks);
    }
    else if(marks>=51&& marks<=60)
    {
        printf("grade for the marks %d is 'B'\n",marks);
    }
    else if(marks>=40&& marks<=50)
    {
        printf("the grade for the marks %d  is'C'\n ",marks);
    }
    else if(marks<40)
    {
        printf("the grade for the marks %d is 'F'\n",marks);
    }
    else
        {
            printf("enter the valid marks");
        }

  return 0;
}

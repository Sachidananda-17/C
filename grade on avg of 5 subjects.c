#include<stdio.h>
int main()
{float mat,phy,che,eng,comp;
 float avg=0;
    printf("grade according to avg of student marks\n");
    printf("enter the marks of maths\n");
    scanf("%f.2",&mat);
    printf("enter the marks of physics\n");
    scanf("%f.2",&phy);
    printf("enter the marks of chemistry\n");
    scanf("%f.2",&che);
    printf("enter the marks of english\n");
    scanf("%f.2",&eng);
    printf("enter the marks of computer science\n");
    scanf("%f.2",&comp);
    avg=(mat+phy+che+eng+comp)/5;
    if(mat>100||phy>100||che>100||eng>100||comp>100)
    {
        printf("enter the valid marks");
    }
   else if(avg<=100&&avg>=91)
    {
        printf("grade for the avg %.2f is 'A+'\n ",avg);
    }
    else if(avg>=71&& avg<=90)
    {
        printf("grade for the  avg %.2f is 'A'\n ",avg);
    }
    else if( avg>=61&& avg<=70)
    {
        printf("grade for the avg %.2f is 'B+'\n",avg);
    }
    else if(avg>=51&& avg<=60)
    {
        printf("grade for the avg %.2f is 'B'\n",avg);
    }
    else if(avg>=40&& avg<=50)
    {
        printf("the grade for the avg %.2f  is'C'\n ",avg);
    }
    else if(avg<40)
    {
        printf("the grade for the avg %.2f is 'F'\n",avg);
    }
    return 0;
}

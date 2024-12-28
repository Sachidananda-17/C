#include<stdio.h>
#include<math.h>
int main()
{
    int r,num,cal,count;
    printf("Enter the last three digits of your respective S.R.M Roll number:\n");
    scanf("%d",&r);
    cal=pow(2,r);
    num=cal+1;
    printf("The calculation for the given number is %d\n",num);
    for(int i=1;i<=num;i++)
    {
        if(num/i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("The entered roll number is Prime\n");
    }
    else
    {
        printf("The entered roll number is Composite\n");

    }
}
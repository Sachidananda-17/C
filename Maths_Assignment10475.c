#include<stdio.h>
#include<math.h>
int main()
{
    long long int cal=2,num;
    int r,count=0,i;
    printf("Enter the last three digits of your respective S.R.M Roll number:\n");
    scanf("%d",&r);
   while(r>1)
   {
       cal=cal*2;
       r--;
   }
   printf("power of a number is: %lld\n",cal);
   num=cal+1;
   printf("clculation is :%lld\n",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
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
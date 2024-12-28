#include<stdio.h>
int main()
{
    int a[10],i;
    float sum=0;
    float avg=0;
    printf("enter the 10 values\n");
    for( i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("the sum of 10 numbers is %.2f\n",sum);
    avg=(sum)/10 ;
    printf("the average of 10 numbers is %f",avg);
    return 0;
}

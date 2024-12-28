#include<stdio.h>
int main()
{
    int A[10];
    printf("enter the age of 10 people\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    int l=A[0];
    for(int i=0;i<10;i++)
    {
        if(l>A[i])
        {
            l=A[i];
        }
    }
    printf("youngest among them= %d",l);
    return 0;
}

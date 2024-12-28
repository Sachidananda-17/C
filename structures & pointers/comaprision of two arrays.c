#include<stdio.h>
void compare(int*,int*,int);
int main()
{
    int a1[25],a2[25],n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("enter the first array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the second array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    compare(a1,a2,n);
    return 0;
}
void compare(int*a1,int*a2,int m)
{
    int i,num=0;
    for(i=0;i<m;i++)
    {
        if(*a1!=*a2)
        {
            num=1;
            break;
        }
        a1++;
        a2++;
    }
    if(num==1)
        printf("both arrays are not same\n");
    else
        printf("arrays are same\n");
    return ;
}

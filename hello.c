#include<stdio.h>
int main()
{
    int n,x,i,j;
    scanf("%d %d",&n,&x);
    int A[n];
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==x)
            {
                printf("pairs=(%d,%d)\n",A[i],A[j]);
            }
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int A[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int p,q;
    scanf("%d %d",&p,&q);
    int B[p][q];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    int C[a][b];
    int D[a][b];
    if(a!=p||b!=p)
       {
          printf("Addition and subtraction is not possible\n");
       }
        else
        {
            printf("sum=\n");

        {
            for(int i=0;i<a;i++)
            {
                for(int j=0;j<b;j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                    printf("%d",C[i][j]);
                }
                printf("\n");
            }
        }
        printf("difference\n");
        {
            for(int i=0;i<a;i++)
            {
                for(int j=0;j<b;j++)
                {
                    D[i][j]=A[i][j]-B[i][j];
                    printf("%d ",D[i][j]);
                }
                printf("\n");
                }
        }
}
return 0;
}









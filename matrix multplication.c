#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,r1,r2,c1,c2,k;
    printf("enter the rows and coloumn of matix A\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and coloumn of matix B\n");
    scanf("%d%d",&r2,&c2);
    if (c1!=r2)
        printf("multiplication is not possible\n");
    else
    {
        printf("enter the elements of matrix A\n");
        for(i=0;j<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                scanf("%d",A[i][j]);
            }
        }
         printf("enter the elements of matrix B\n");
        for(i=0;j<r2;i++)
        {
            for (j=0;j<c2;j++)
            {
                scanf("%d",B[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                C[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    C[i][j]=C[i][j] + A[i][j]*B[i][j];
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
              printf("%d",C[i][j]);
            }
            printf("\n");
        }
    }
}

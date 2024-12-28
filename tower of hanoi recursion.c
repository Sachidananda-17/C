#include<stdio.h>
void TOH(int,char,char,char);
int main()
{
    int n;
    printf("enter the no of disks\n");
    scanf("%d",&n);
    printf("the sequence of moves involved in the T.O.H are\n");
    TOH(n,'A','B','C');
 return 0;
}
void TOH(int n, char A,char B,char C)
{
    if(n==1)
    {
        printf("move disk 1 from %c to %c\n",A,C);
        return ;
    }
    TOH(n-1,A,C,B);
    printf("move disk %d from %c to %c\n",n,A,C);
    TOH(n-1,B,A,C);
}

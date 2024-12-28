#include<stdio.h>
#include<string.h>
int main()
{
    char A[50],B[50];
    printf("enter the first string");
    scanf("%s",&A);
    printf("enter the second string");
    scanf("%s",&B);
    int a=strcmp(A,B);
    if (a==0)
    {
        printf("strings are identical");
    }
    else
    {
        printf("strings are not identical");
    }
}

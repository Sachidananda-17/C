#include <stdio.h>

int main()
{
    int n, count=0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (int i=2; i<n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==0)
        printf("%d  number is a prime number",n);
    else
        printf("%d  number is not a prime number",n);
  return 0;
}


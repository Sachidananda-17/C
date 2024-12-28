#include<stdio.h>
void inc();
int main()
{
     inc();
    inc();
    inc();
    return 0;
}
void inc()
{
     static int i=1;
    printf("%d",i);
    i++;
}
/*#include<stdio.h>
void inc();
int main()
{
     inc();
    inc();
    inc();
    return 0;
}
void inc()
{
     static int i=1;
    printf("%d",i);
    i++;
}*/

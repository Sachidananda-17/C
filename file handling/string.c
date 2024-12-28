#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i;
    fp=fopen("D:/demo/hello.txt","w");
    char str[20]="Hello";
    while(str[i])
    {
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
}

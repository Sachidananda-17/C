#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char i;
    fp=fopen("D:/demo/hello.txt","r");
    if(fp==NULL)
    {
        printf("file does not exist");
        exit(0);
    }
    i=fgetc(fp);
    printf("%c",i);
    fclose(fp);
}

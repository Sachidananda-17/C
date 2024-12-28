#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("D:/demo/s.txt","w");
    if(fp==NULL)
    {
        printf("file does not exist");
        exit(0);
    }
    fputc('s',fp);
    fputc('A',fp);
    fclose(fp);
}

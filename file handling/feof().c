#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:/demo/greeting.txt","a+");
    char str[20];
    printf("enter string\n");
    gets(str);
    fputs(str,fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);

}

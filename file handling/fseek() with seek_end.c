#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("D:/demo/patriots.txt","w+");
    fputs("JAI HIND",fp);
    fseek(fp,4,SEEK_END);
    fputs("BHARATH\n",fp);
    rewind(fp);
    char ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
}

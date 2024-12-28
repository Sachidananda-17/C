#include<stdio.h>
int main ()
{
    char character;
    printf("enter the character\n");
    scanf("%c",&character);
    if(character=='a'||character=='A'||character=='e'||character=='E'||character=='i'||character=='I'||character=='o'||character=='O'||character=='u'||character=='U')
    {
        printf("the given character %c is vowel\n",character);
    }
    else
    {
        printf("the  given character %c is consonant ",character);
    }
    return 0;
}

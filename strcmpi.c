#include <stdio.h>
#include <string.h>

int main( )
{
char str1[] = "sachidananda" ;
char str2[] = "SACHIDANANDA" ;

int j = strcmpi ( str1, str2 ) ;
if(j==0)
    printf("both strings are identical\n");
else
    printf("both strings are not identical\n");

printf ( "The function returns = %d",j ) ;
return 0;
}

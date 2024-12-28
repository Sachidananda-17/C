#include<stdio.h>
int main()
{
     int integer;
     float float_type;
     double doubletype;
     char character;
     printf("%the size of integer is %lu\n",sizeof(integer));
     printf("the size of float is %zu\n",sizeof(float_type));
     printf("the size of double is %lu\n",sizeof(double));
     printf("the size of character is %zu",sizeof(character));
}

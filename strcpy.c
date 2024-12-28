#include <stdio.h>
#include <string.h>
int main()
{
  char name1[20] = "sachidananda";
  char name2[20];

  strncpy(name2, name1,5);
printf("\nname1=%s",name2);
  return 0;
}

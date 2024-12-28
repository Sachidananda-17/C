#include<stdio.h>
int main()
{
    int a = 35, b = 12, num=111,i;
    printf("Output of Bitwise AND = %d\n", a&b);
    printf("Output of Bitwise OR = %d\n", a|b);
    printf("Output of Bitwise XOR = %d\n", a^b);
    printf("Output of Bitwise complement = %d\n",~35);
    printf("Output of Bitwise complement = %d\n",~-12);
    for (i=0; i<=2; ++i)
    printf("Right shift by %d: %d\n", i, num>>i);
    for (i=0; i<=2; ++i)
    printf("Left shift by %d: %d\n", i, num<<i);
    return 0;
}

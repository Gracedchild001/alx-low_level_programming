#include "main.h"
/**
*print_binary - prints the binary equivalent of a decimal number
*@n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int s, c = 0;
unsigned long int u;

for (s = 63; s >= 0; s--)
{
u = n >> s;
if (u & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}

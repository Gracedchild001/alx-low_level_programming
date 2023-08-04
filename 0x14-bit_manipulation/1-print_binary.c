#include "main.h"
/**
*print_binary - prints the binary equivalent of a decimal number
*@n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int s, count = 0;
unsigned long int current;

for (s = 63; s >= 0; s--)
{
current = s >> s;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

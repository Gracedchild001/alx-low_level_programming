#include "main.h"
/**
*print_binary - a function that prints binary rep of num
*@n: any inputed number to be printed in binary
*/
void print_binary(unsigned long int n)
{
int s, c = 0;
unsigned long int c;

for (s = 63; s >= 0; s--)
{
c = n >> s;
if (c & 1)
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

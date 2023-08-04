#include "main.h"
/**
*print_binary - prints the binary equivalent of a decimal number
*@n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int s, cnt = 0;
unsigned long int cur;

for (s = 63; s >= 0; s--)
{
cur = s >> s;
if (cur & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
_putchar('0');
}
if (!cnt)
_putchar('0');
}

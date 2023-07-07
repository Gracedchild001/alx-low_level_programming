#include "main.h"
/**
*_puts - outputs str with new line, to stdout
*@str: string to print
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

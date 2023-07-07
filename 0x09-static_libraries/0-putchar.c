#include <unistd.h>
/**
*_putchar - input c char to stdout
*@c: print char
*Return: On success 1.
*On error, return -1, set errno appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


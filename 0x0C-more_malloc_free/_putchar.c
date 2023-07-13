#include "main.h"
#include <unistd.h>
/**
*_putchar - inputs char c to stdout
*@c: char output
*Return: On success 1.
*On error,return -1 ,set errno appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


#include "main.h"
#include <unistd.h>
/**
*_putchar - inputs char c to stdout
*@c: char to be printed
*Return: On success 1.
*On error, return -1 is, and set errno is appropriately.
*/
int _putchar(char c)

{
return (write(1, &c, 1));
}

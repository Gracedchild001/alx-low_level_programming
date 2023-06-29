#include "main.h"
#include <unistd.h>
/**
*_putchar - writes c char to stdout
*@c: The print char
*Return: On success 1.
*On error, return -1, with errno set also.
*/
int _putchar(char c)

{
return (write(1, &c, 1));
}

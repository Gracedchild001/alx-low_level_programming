#include "main.h"
#include <unistd.h>
/**
*_putchar - this writes char to the std libaray
*@c: this is the char to be printed
*Return: 1 On success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


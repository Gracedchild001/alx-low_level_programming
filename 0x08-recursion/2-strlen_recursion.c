#include "main.h"
/**
*_strlen_recursion - Return length of str.
*@s: str to measure.
* Return: length of str.
*/
int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}

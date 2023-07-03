#include "main.h"
/**
*_memset - inputs a blck of mem wit spec value
*@s: start memory address to be filled
*@b: expected value
*@n: no of bytes to be edited
*Return: edited array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}


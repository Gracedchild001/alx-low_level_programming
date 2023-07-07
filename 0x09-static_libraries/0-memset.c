#include "main.h"
/**
*_memset - fills blk f mem with a spec valu
*@s: start address of filled mem
*@b: the value desired
*@n: no ofchanged bytes
*Return: changed array with new value for n bytes
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

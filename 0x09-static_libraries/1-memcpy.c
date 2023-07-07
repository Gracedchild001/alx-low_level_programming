#include "main.h"
/**
*_memcpy - function to copy mem a
*@dest: mem is stored
*@src: mem is copied
*@n: num f bytes
*Return: copied mem with
*n byt changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

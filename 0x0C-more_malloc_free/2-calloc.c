#include <stdlib.h>
#include "main.h"
/**
**_memset - fills mem with const byte
*@s: filled mem area
*@b: copied char
*@n: number of copying
*Return: pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * *_calloc - alloc mem for arr
*@nmemb: elements num in arr
*@size: size of elements
*Return: allocated memory pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}

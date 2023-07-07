#include "main.h"
/**
*_strncat - conc two str using
*at most n bytes from src
*@dest: in
*@src: in
*@n: in
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

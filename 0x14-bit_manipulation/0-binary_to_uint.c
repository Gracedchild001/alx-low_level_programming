#include "main.h"
/**
*binary_to_uint - func to convert binary num to unsigned_int
*@b: is pointing to a string of 0 and 1 chars
*Return: the converted number or 0 if there is one
*or more chars & str b not 0 or 1 or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
int s;
unsigned int dec_val = 0;

if (!b)
return (0);
for (s = 0; b[s]; s++)
{
if (b[s] < '0' || b[s] > '1')
return (0);
dec_val = 2 * dec_val + (b[s] - '0');
}
return (dec_val);
}

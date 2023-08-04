#include "main.h"
/**
*flip_bits - a func that returns number of bits you flip
*@n: probability number one
*@m:probability number two
*Return: the flipped number gotten from flip_bits funct
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int b, u = 0;
unsigned long int r;
unsigned long int exclusive = n ^ m;
for (b = 63; b >= 0; b--)
{
r = exclusive >> b;
if (r & 1)
u++;
}
return (u);
}

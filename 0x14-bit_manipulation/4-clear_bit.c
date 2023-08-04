#include "main.h"
/**
*clear_bit - a funct to set value of a bit to 0 at index
*@n: this points to the number that need editing
*@index: is the index, starts from 0 of the bit wanted
*Return: 1 if it works, or -1 if error occurs
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

#include "main.h"
/**
*set_bit - a funct to set value of bit to 1 at given index
*@n: this points to any number to be edited
*@index: is the index, starts from 0 of the bit to set up
*Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}

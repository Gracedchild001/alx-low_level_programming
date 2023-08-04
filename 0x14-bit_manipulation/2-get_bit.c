#include "main.h"
/**
*get_bit - a funct to return value of a bit given index
*@n: number value
*@index: this is the index, starting from 0 of the bit you want
*Return: the value of the bit at index, -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit

if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}

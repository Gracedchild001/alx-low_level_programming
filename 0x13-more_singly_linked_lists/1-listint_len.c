#include "lists.h"
/**
*listint_len - count number of elements
*@z: head_pointer
*Return: number_of_nodes
*/
size_t listint_len(const listint_t *z)
{
size_t num_nodes = 0;

while (z)
{
num_nodes++;
z = z->next;
}
return (num_nodes);
}

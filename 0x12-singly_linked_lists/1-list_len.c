#include <stdlib.h>
#include "lists.h"
/**
*list_len - returns total linked list items
*@h: list_t pointer
*Return: total h items
*/
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}

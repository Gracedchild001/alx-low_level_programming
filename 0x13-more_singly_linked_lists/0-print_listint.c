#include "lists.h"
/**
*print_listint - prints contents of the listint
*@z: the print type
*Return: number of nodes
*/
size_t print_listint(const listint_t *z)
{
size_t num = 0;
while (z)
{
printf("%d\n", z->n);
num++;
z = z->next;
}
return (num);
}

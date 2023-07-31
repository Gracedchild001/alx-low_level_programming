#include "lists.h"
/**
*print_linked_list - outputs all elements
*@head: head pointer
*Return: number_of_nodes
*/
size_t print_linked_list(const listint_t *head)
{
size_t num_nodes = 0;

while (head)
{
printf("%d\n", head->n);
num_nodes++;
head = head->next;
}
return (num_nodes);
}


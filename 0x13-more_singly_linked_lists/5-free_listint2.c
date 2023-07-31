#include "lists.h"
/**
*free_listint2 - function to free list
*@head_pointer: list_pointer
*/
void free_listint2(listint_t **head_pointer)
{
listint_t *current_node;

if (head_pointer == NULL)
return;
while (*head_pointer)
{
current_node = (*head_pointer)->next;
free(*head_pointer);
*head_pointer = current_node;
}
*head_pointer = NULL;
}

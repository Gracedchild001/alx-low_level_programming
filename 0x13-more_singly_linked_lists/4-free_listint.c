#include "lists.h"
/**
*free_listint - funct to free a list
*@head: head_pointer of list
*/
void free_listint(listint_t *head)
{
listint_t *current_node;
while (head)
{
current_node = head->next;
free(head);
head = current_node;
}
}

#include "lists.h"
/**
*delete_nodeint_at_index - deletes a node
*@head: first_element pointer
*@index: delete node index
*Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cur_node = *head;
listint_t *prev_node = NULL;
unsigned int cur_index = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(cur_node);
return (1);
}
while (cur_index < index)
{
if (!cur_node || !(cur_node->next))
return (-1);
prev_node = cur_node;
cur_node = cur_node->next;
cur_index++;
}
prev_node->next = cur_node->next;
free(cur_node);
return (1);
}

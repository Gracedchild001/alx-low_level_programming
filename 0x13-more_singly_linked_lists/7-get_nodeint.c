#include "lists.h"
/**
*get_nodeint_at_index - returns the node at an index
*@head: pointer to first_node
*@index: node_index
*Return: the spec_index_pointer or NULL otherwise
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cur_index = 0;
listint_t *cur_node = head;

while (cur_node && cur_index < index)
{
cur_node = cur_node->next;
cur_index++;
}
return (cur_node ? cur_nodeode : NULL);
}

#include "lists.h"
/**
*insert_node_at_index - inserts a new node
*@head: pointer to first node
*@index: new_node container
*@data: new_node data
*Return: new_node pointer or NULL if fails
*/
listint_t *insert_node_at_index(listint_t **head, unsigned int index, int data)
{
unsigned int i;
listint_t *new_node;
listint_t *temp = *head;
new_node = malloc(sizeof(listint_t));

if (!new_node || !head)
return (NULL);
new_node->n = data;
new_node->next = NULL;
if (index == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; temp && i < index; i++)
{
if (i == index - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}
return (NULL);
}

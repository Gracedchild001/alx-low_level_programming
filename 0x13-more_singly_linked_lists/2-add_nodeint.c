#include "lists.h"
/**
*add_nodeint - puts new node at beginning
*@head: first node pointer to the first node
*@n: new node data
*Return: new node pointer or null if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));

if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

#include "lists.h"
/**
*get_nodeint_at_index - funct to returns the nth node of a listint_t
*@head: first node
*@index: the index of the node, starting at 0
*Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *t = head;
while (t && a < index)
{
t = t->next;
a++;
}
return (t ? t : NULL);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*add_node - add node at beginning of list
*@head: double pointer to list
*@str: str added in node
*Return: address of new items, otherwise NULL
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}

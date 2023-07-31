#include "lists.h"
/**
*pop_listint - deletes head node in list
*@new_head: first_element pointer
*Return: current_element or 0 if none
*/
int pop_listint(listint_t **new_head)
{
listint_t *temp;
int num;

if (!new_head || !*new_head)
return (0);
num = (*new_head)->n;
temp = (*new_head)->next;
free(*new_head);
*new_head = temp;
return (num);
}

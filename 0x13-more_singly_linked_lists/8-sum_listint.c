#include "lists.h"
/**
*sum_listint - calculates the sum data
*@head: first_node
*Return: expected_sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

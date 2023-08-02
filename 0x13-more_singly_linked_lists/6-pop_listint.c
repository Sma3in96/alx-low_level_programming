#include "lists.h"
/**
 * pop_listint - pop a head
 * @head: head
 *
 * Return: int or 0
 */
int pop_listint(listint_t **head)
{
	int j;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		j = head->n;
		head = head->next;
		free(temp);
		return (j);
	}
}

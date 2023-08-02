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
	listint_t *h;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		j = temp->n;
		h = temp->next;
		free(temp);
		*head = h;
		return (j);
	}
}

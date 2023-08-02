#include "lists.h"
/**
 * free_listint - free linked list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *joe;

	joe = head;
	while (joe != NULL)
	{
		head = head->next;
		free(joe);
		joe = head;
	}
}

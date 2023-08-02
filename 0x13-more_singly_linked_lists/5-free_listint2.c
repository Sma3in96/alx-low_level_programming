#include "lists.h"
/**
 * free_listint2 - plus free
 * @head: head of linked lists
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *joe; 
	listint_t *current;

	if (head)
	{
		current = *head;
		joe = current;
		while (joe)
		{
			current = current->next;
			free(joe);
			joe = current;
		}
		*head = NULL;
	}
}

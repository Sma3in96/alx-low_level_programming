#include "lists.h"
/**
 * get_nodeint_at_index -  get
 * @head: head
 * @index: index
 * Return: pointer to index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}

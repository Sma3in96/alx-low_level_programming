#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (ptr)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
		ptr = head;
	}
}

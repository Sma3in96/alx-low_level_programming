#include "lists.h"
/**
 * list_len - return number of elems
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}

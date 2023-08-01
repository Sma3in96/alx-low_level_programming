#include "list.h"
/**
 * print_list - print element of list
 * @h: list name
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number++;
	}
	return (number);
}

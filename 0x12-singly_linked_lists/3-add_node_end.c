#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *find;
	size_t sizestr;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	sizestr = 0;
	while (str[sizestr])
		sizestr++;
	nnode->len = sizestr;
	nnode->next = NULL;
	find = *head;
	if (find ==  NULL)
		*head = new;
	else
	{
		while (find->next != NULL)
			find = find->next;
		find->next = new;
	}
	return (*head);
}

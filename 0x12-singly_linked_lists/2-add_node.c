#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t lene;

	newnode = malloc(sizeof(list_t));
	if (newmode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	lene = 0;
	while (str[lene] != 0)
	{
		lene ++;
	}
	newnode->len = lene;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

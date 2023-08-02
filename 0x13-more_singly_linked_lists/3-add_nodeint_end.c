#include "lists.h"
/**
 * add_nodeint_end - add to the end
 * @h: list
 * @n: int to add
 * Return: head of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *token;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	token = *head;
	if (token == NULL)
		*head = new;
	else
	{
		while (token->next)
			token = token->next;
		token->next = new;
	}
	return (*head);
}

#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory
 * @ptr: array
 * @old_size: int
 * @new_size: int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *ptrc = (char *)ptr;
	unsigned int i;

	if (old_size == new_size && ptr != 0)
	{
		p = ptrc;
		free(ptr);
		return (p);
	}
	if (ptr == NULL)
		return (malloc(new_size * sizeof(char)));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size * sizeof(char));
	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = ptrc[i];
	free(ptr);
	return (p);
}

#include "dog.h"
#include <stdlib>
/**
 * free_dog - free the dooog!!
 * @d: pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

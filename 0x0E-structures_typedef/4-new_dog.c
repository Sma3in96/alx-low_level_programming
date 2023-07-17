#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner name
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k = 0;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	while (*(name + j))
		j++;
	while (*(owner + i))
		i++;
	p->name = malloc(j + 1);
	p->owner = malloc(i + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		p->name[k] = name[k];
	}
	p->name[k] = '\0';
	for (k = 0; k < i; k++)
		p->owner[k] = owner[k];
	p->owner[k] = '\0';
	p->age = age;
	return (p);
}

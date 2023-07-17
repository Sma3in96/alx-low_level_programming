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
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

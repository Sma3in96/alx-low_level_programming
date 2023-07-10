#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array with malloc
 * @size: size of array
 * @c: the iniz
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int j = 0;

	if (size == 0)
		return (NULL);
	char *p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		p[j] = c;
	}
	return (p);
}

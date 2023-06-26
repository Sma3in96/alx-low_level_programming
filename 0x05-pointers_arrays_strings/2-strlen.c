#include "main.h"
/**
 * _strlen - length  of a string
 * @s: string
 *
 * Return: int represent the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

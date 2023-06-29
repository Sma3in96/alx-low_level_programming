#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: dest
 * @src : source
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
	i++;
	}
	while (*(src + j))
	{
	*(dest + i + j) = *(src + j);
	j++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: dest
 * @src: source
 * @n: int
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
	i++;
	}
	while (*(src + j) && j < n)
	{
	*(dest + j) = *(src + j);
	j++;
	}
	return (dest);
}

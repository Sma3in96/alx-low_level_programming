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
	int j = 0;

	while (*(src + j) && j < n)
	{
	*(dest + j) = *(src + j);
	j++;
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}

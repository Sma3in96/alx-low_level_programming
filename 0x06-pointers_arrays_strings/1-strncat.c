#include "main.h"
/**
 * _strncat - concatenat 2 strs
 * @dest: dest
 * @src: src
 * @n: int
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
	i++;
	}
	while (*(src + j) && j < n)
	{
	*(dest + i + j) = *(src + j);
	j++;
	}
	return (dest);
}

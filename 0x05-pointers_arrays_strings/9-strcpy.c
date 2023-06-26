#include "main.h"
/**
 * _strcpy - copy string to another
 * @dest: new string
 * @src: source string
 *
 * Return: pointer on new string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}

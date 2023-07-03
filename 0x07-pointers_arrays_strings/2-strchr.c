#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in string
 * @s: pointer
 * @c: char
 *
 * Return: pointer to char place
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

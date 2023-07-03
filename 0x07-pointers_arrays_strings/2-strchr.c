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
	int found = 0;

	if (*s == '\0')
		return (s);
	while (*++s != '\0')
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
	}
	if (found == 0)
		s = NULL;
	return (s);
}

#include "main.h"
/**
 * _strchr - locates a char in string
 * @s: pointer
 * @c: char
 *
 * Return: pointer to char place
 */
char *_str(char *s, char c)
{
	int i = 0;
	int found = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
		s++;
	}
	s--;
	if (found == 0)
		s = NULL;
	return (s);
}

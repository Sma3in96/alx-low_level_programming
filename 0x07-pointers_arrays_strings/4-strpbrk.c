#include "main.h"
/**
 * _strpbrk - number of byte
 * @s: string
 * @accept: chars
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j = 0;

	while (*(s + j) != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			{
				return (s + j);
			}
		}
		j++;
	}
	return ('\0');
}

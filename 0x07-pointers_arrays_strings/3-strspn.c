#include "main.h"
/**
 * _strspn - number of byte
 * @s: string
 * @accept: chars
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, sum = 0;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				sum++;
				break;
			}
		}
		s++;
	}
	if (*s == *(accept + i))
		sum++;
	return (sum);
}

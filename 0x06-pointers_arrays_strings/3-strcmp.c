#include "main.h"
/**
 * _strcmp - cmp 2 strings
 * @s1: str 1
 * @s2: str 2
 *
 * Return: +15 -15 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (j == 0)
	{
		if (!*(s1 + i) && !*(s2 + i))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}

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
    int n = 0;
    int k;

	while (*(s1 + i))
	{
	i++;
	}
	while (*(s2 + j))
	{
	j++;
	}
	n = i >= j ? i : j;
	for (k = 0; k < n ; k++ )
	{
		if ( *(s1 + k) < *(s2 + k) )
		{
			return -15;
		}
		if ( *(s1 + k) > *(s2 + k) )
		{
			return +15;
		}
		if (k == n - 1)
			return 0;
	}
}

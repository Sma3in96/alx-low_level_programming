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
	unsigned int i, sum = 0, old_sum = 0;

	while (*s != '\0')
	{
		old_sum = sum;
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				sum++;
				break;
			}
		}
		if (old_sum == sum)
			break;
		s++;
	}
	return (sum);
}

#include "main.h"
/**
 * leet - entry point
 * @s: string
 *
 * Return: pointer
 */
char *leet(char *s)
{
	int i = 0, j;
	int low[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int subs[] = {52, 51, 48, 55, 49};

	while (*(s + i))
	{
		for (j = 0; j <= 4; j++)
		{
			if (*(s + i) == low[j] || *(s + i) == upper[j])
			{
				*(s + i) = subs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

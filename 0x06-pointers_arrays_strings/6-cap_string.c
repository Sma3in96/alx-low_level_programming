#include "main.h"
/**
 * cap_string - cap all words
 * @s: string
 *
 * Return: string all caps
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int nwword[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) <= 'z' && *(s + i) >= 'a')
		*(s + i) = *(s + i) - 32;
	i = 1;
	while (*(s + i))
	{
		for (j = 0; j <= 12; j++)
		{
			if (*(s + i) == nwword[j])
			{
				if (*(s + 1 + i) <= 'z' && *(s + 1 + i) >= 'a')
				{
					*(s + 1 + i) = *(s + 1 + i) - 32;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}

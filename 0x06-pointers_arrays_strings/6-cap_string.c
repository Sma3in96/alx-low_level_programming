#include "main.h"
/**
 * cap_string - cap all words
 * @s: string
 *
 * Return: string all caps
 */
char *cap_string(char *s)
{
	int i = 0, newword = 1;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z' && newword == 1)
		{
			*(s + i) = *(s + i) - 32;
		}
		if (*(s + i) == 32 || *(s + i) == 9 || *(s + i) == 10 || *(s + i) == 44)
			newword = 1;
		if (*(s + i) == 46 || *(s + i) == 33 || *(s + i) == 63 || *(s + i) == 34)
			newword = 1;
		if (*(s + i) == 41 || *(s + i) == 123 || *(s + i) == 125 || *(s + i) == 40)
			newword = 1;
		if (*(s + i) == 59)
			newword = 1;
	}
	return (s);
}

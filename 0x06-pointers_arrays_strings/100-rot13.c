#include "main.h"
/**
 * rot13 - encode
 * @s: string
 *
 * Return: pointer
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i))
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = code[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

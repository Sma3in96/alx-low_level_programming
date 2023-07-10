#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat 2 strings
 * @str1: 1st str
 * @str2: 2nd str
 * Return: pointer to the new string
 */
char *str_concat(char *str1, char *str2)
{
	int i = 0, j = 0, n = 0;
	char *p;

	if (str2 != NULL)
	{
		while (*(str2 + j))
			j++;
	}
	if (str1 != NULL)
	{
		while (*(str1 + i))
			i++;
	}
	p = (char *)malloc(i + j + 1);
	if (p == NULL)
		return (NULL);
	for (n = 0; n < (i+j); n++)
	{
		if (n >= i)
			p[n] = *(str2 + (n - i));
		else
			p[n] = *(str1 + n);
	}
	p[n + 1] = '\0';
	return (p);
}

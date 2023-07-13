#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: size
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	if (n > j)
		n = j;
	p = (char *)malloc((i + n) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i + n; k++)
	{
		if (k < i)
			p[k] = s1[k];
		if (k >= i)
			p[k] = s2[k - i];
	}
	p[i + n + 1] = '\0';
	return (p);
}

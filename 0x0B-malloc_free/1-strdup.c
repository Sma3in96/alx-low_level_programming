#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - str duplication
 * @str: string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int j = 0, i;
	char *p;

	if (str == NULL)
		return (NULL);
	while (*(str + j))
	{
		j++;
	}
	p = (char *)malloc(j * sizeof(char));
	for (i = 0; i < j; i++)
	{
		p[i] = *(str + i);
	}
	return (p);
}

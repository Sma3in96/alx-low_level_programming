#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - print args
 * @ac: int
 * @av: array
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, n;
	int length = 0, index = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
			j++;
		length += j;
	}
	p = (char *)malloc((length + ac + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (*(av[i] + n))
			n++;
		for (j = 0; j < n; j++)
		{
			p[index++] = av[i][j];
		}
		p[index++] = '\n';
	}
	p[index] = '\0';
	return (p);
}

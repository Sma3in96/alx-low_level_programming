#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - print args
 * @ac: int
 * @av: array
 * Return: pointer
 */
char *argstostr(int ac, char **av) {
	int i, j, n;
	int total_length = 0, current_index = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
			j++;
		total_length += j;
	}
	p = (char *)malloc((total_length + ac) * sizeof(char));
	if (p == NULL) 
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (*(av[i] + n))
			n++;
		for (j = 0; j < n; j++)
		{
			p[current_index++] = av[i][j];
		}
		p[current_index++] = '\n';
	}
	p[current_index] = '\0';
	return p;
}

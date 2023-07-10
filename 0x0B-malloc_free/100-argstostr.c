#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av) {
	int i, j, n;
	int total_length = 0, current_index = 0;
	char *p;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
			j++;
		total_length += j;
	}
	p = (char *)malloc((total_length + ac - 1) * sizeof(char));
	if (p == NULL) 
	{
	return NULL;
	}
	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (*(av[i] + n))
			n++;
		for (j = 0; j < n; j++)
		{
			p[current_index++] = av[i][j];
		}
		if (i != ac - 1)
		{
			p[current_index++] = '\n';
		}
	}
	p[current_index] = '\0';
	return p;
}

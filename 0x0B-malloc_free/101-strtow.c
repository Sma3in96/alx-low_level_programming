#include <stdio.h>
#include <stdlib.h>
/**
 * free2 - free
 * @p: pointer
 * @rows: int
 * Return: vois
 */
void free2(char **p, int rows)
{
	int h;

	for (h = 0; h < rows; h++)
		free(p[h]);
	free(p);	
}
/**
 * strtow - spilt string
 * @str: string to split
 * Return: pointer
 */
char **strtow(char *str)
{
	int j = 0, wcount = 0, flag = 0, i = 0, n = 0, k = 0;
	char **p;

	while (*(str + j) != '\0')
	{
		if (*(str + j) != ' ' && flag == 0)
		{
			wcount++;
			flag = 1;
		}
		if (*(str + j) == ' ')
			flag = 0;
		j++;
	}
	if (wcount == 0)
		return (NULL);
	p = (char **)malloc((wcount + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < wcount; i++)
	{
		while (str[j] == ' ')
			j++;
		n = 0;
		while (*(str + j + n) != '\0' && str[j + n] != ' ')
			n++;
		p[i] = (char *)malloc((n + 1) * sizeof(char));
		if (p[i] == NULL)
			free2(p, i);
		k = 0;
		while (k < n)
		{
			p[i][k] = str[j + k];
			k++;
		}
		p[i][n]	= '\0';
		j += n;
	}
	p[wcount] = NULL;
	return (p);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - spilt string
 * @str: string to split
 * Return: pointer
 */
char **strtow(char *str)
{
	int j = 0, wcount = 0, flag = 0, i = 0, n = 0, k = 0;
	char **p;

	for (j = 0; *(str + j) != '\0'; j++)
	{
		if (*(str + j) != ' ' && flag == 0)
		{
			wcount++;
			flag = 1;
		}
		if (*(str + j) == ' ')
			flag = 0;
	}
	if (wcount == 0)
		return (NULL);
	p = (char **)malloc((wcount + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < wcount; i++)
	{
		for (j = 0; str[j] == ' '; j++);
		for (n = 0; *(str + j + n) != '\0' && str[j + n] != ' '; n++);
		p[i] = (char *)malloc((n + 1) * sizeof(char));
		if (p[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(p[k]);
			free(p);
			return (NULL);
		}
		for (k = 0; k < n; k++)
			p[i][k] = str[j + k];
		p[i][n]	= '\0';
		j += n;
	}
	p[wcount] = NULL;
	return (p);
}

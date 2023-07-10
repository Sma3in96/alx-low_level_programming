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

	if (str[0] == '\0' || str[0] == ' ')
		return (NULL);
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
	p = (char **)malloc((j + wcount + 1) * sizeof( char *));
	if (p == NULL)
		return NULL;
	j = 0;
	for (i = 0; i < wcount; i++)
	while (*(str + j) != '\0')
	{
		if (*(str + j) != ' ')
		{
			n = 0;
			while (*(str + j + n) != ' ')
				n++;
			p[i] = (char *)malloc(n + 1);
			for ( k = 0 ; k < n ; k++)
				p[i][k] = *(str + j + k);
			p[i][n] = '\0';
			j += n;
			break;
		}
		else
			j++;
	}
	p[wcount] = NULL;
	return p;
}

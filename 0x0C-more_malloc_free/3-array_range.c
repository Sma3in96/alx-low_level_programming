#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of ints
 * @min: start
 * @max: end
 * Return: void
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	p = (int *)malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	p[0] = min;
	for (i = 1; i <( max - min + 1); i++)
		p[i] = min + i;
	return (p);	
}

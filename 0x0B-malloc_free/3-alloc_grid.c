#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dim array
 * @width: wid
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, n;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = (int **)malloc(width * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ar[i] = (int *)malloc(height * sizeof(int));
		if (ar[i] ==  NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}

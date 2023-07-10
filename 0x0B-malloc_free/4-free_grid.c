#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  free the allocated memory
 * @grid: array
 * @height: rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i=0; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

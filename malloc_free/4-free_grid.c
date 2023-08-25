#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - liberates memory of the 2d array
 * @grid: two dimensions grid
 * @height: height dimension of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to twodimensional array
 */
int **alloc_grid(int width, int height)
{
	int **gwh;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gwh = malloc(sizeof(int *) * height);

	if (gwh == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		gwh[x] = malloc(sizeof(int) * width);
		if (gwh[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(gwh[x]);
			}
			free(gwh);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			gwh[x][y] = 0;
		}
	}
	return (gwh);
}

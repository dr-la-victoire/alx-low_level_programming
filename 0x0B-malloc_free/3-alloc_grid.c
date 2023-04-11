#include "main.h"

/**
 * alloc_grid - crates a 2D array
 * @width: the array width
 * @height: the array height
 *
 * Return: a pointer to the 2D array created
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(width * sizeof(int));

	if (grid == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				grid[i][j] = i * j;
			}
		}
	}

	return (grid);
}

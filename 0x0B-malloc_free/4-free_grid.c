#include "main.h"

/**
 * free_grid - frees a 2D array created with DMA
 * @grid: the grid
 * @height: the grid height
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

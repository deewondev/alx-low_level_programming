#include "main.h"

/**
 * free_grid - program that frees a 2D grid created by
 * alloc_grid function
 * @grid: variable that holds the alloc_grid function
 * @height: columns of the 2D grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

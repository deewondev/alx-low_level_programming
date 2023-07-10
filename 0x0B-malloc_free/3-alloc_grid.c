#include "main.h"

/**
 * alloc_grid - program that returns to a 2D array of integers
 * @width: rows of array integer
 * @height: columns of array integer
 * Return: integer else NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j, **array2D;

	if (width < 1 || height < 1)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2D[i] = malloc(sizeof(int) * width);

		if (array2D[i] == NULL)
		{
			while (i >= 0)
			{
				free(array2D[i]);
				i--;
			}
			free(array2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array2D[i][j] = 0;
		}
	}

	return (array2D);
}

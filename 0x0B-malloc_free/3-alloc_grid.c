#include "main.h"

/**
 * alloc_grid - program that returns to a 2D array of integers
 * @width: rows of array integer
 * @height: columns of array integer
 * Return: integer else NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, **array2D;

	if (width < 1 || height < 1)
		return (NULL);

	array2D = (int **) malloc(sizeof(int *) * width);

	for (i = 0; i < width; i++)
	{
		array2D[i] = (int *) malloc(sizeof(int) * height);
	}

	return (array2D);
}

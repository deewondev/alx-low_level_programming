#include "main.h"

/**
 * array_range -  program that creates an array of integers
 *
 * @min: array of integers first parameter
 *
 * @max: array of integers second parameter
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}

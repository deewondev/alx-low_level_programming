#include "main.h"

/**
 * create_array - program that creates an array of chars,
 * and initializes it with a specific char
 * @size: positive integer of memory size
 * @c: variable that stores the created array of chars value
 * Return: pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}

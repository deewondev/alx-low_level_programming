#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 *
 * @old_size: size of old memory
 *
 * @new_size: size of new memory
 *
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	char *newptr;

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < size; i++)
		newptr[i] = ((char *)ptr)[i];

	free(ptr);
	return (newptr);
}

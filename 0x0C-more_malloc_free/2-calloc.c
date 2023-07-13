#include "main.h"

/**
 * _calloc - program that allocates memory for an array using malloc
 *
 * @nmemb: array of unsigned int
 *
 * @size: number of memmory size allocated
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, len;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = 0;

	return (ptr);
}

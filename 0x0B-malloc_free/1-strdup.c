#include "main.h"

/**
 * _strdup - program that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as parameter
 * @str: pointer to a string
 * Return: pointer to the duplicated string on SUCCESS,
 * else NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptr; /* pointer to the duplicated string str */
	unsigned int x = 0; /* str index length */
	unsigned int y; /* str index */

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	ptr = malloc((x + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		ptr[y] = str[y];

	return (ptr);
}

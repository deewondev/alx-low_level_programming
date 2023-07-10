#include "main.h"

/**
 * str_concat - program that concatenates two strings
 * @s1: pointer to first parameter string
 * @s2: pointer to first parameter string
 * Return: pointer to newly created string on SUCCESS
 * else NULL on FAILURE
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x, midcount = 0, count = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
	{
		count++;
		midcount++;
	}
	for (x = 0; s2[x] != '\0'; x++)
		count++;

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] = s1[x];

	for (x = 0; s2[x] != '\0'; x++)
		ptr[midcount + x] = s2[x];

	ptr[count + 1] = '\0';

	return (ptr);
}

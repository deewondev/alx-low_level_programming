#include "main.h"

/**
 * string_nconcat - program that concatenates two strings
 *
 * @s1: first string parameter
 *
 * @s2: second string parameter
 *
 * @n: number of bytes allocated
 *
 * Return: pointer which contains s1, followed by s2 and '\0'
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, s1len = 0, s2len = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2len++;

	if (n >= s2len)
		len = s1len + s2len;
	else
		len = s1len + n;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	/**
	*for (i = 0; s1[i] != '\0'; i++)
	*	ptr[i] = s1[i];
	*/

	i = 0;
	for (j = 0; j < len; j++)
	{
		if (j < s1len)
			ptr[j] = s1[j];

		if (j >= s1len)
		{
			ptr[j] = s2[i];
			i++;
		}
	}

	ptr[j] = '\0';

	return (ptr);
}

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

	ptr = malloc(n * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	len = s1len;

	for (j = 0; j <= n && s2[j] != '\0'; j++)
	{
		ptr[j + s1len] = s2[j];
		len++;
	}

	ptr[len + 1] = '\0';

	return (ptr);
}

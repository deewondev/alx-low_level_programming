#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: First parameter
 *
 * @src: Second parameter
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, count = 0, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		count = dest_len + i;
	}
	dest[count + 1] = '\0';

	return (dest);
}

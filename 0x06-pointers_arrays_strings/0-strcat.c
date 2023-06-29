#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 *
 * @dest: First parameter
 *
 * @src: Second parameter
 *
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i, count = 0, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	dest_len = count;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
		dest_len++;
	}
	dest[dest_len + 1] = '\0';

	return (dest);
}

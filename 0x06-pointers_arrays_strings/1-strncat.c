#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: First parameter
 *
 * @src: Second parameter
 *
 * @n: Third parameter
 *
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count = 0, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	dest_len = count;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
		dest_len++;
	}

	return (dest);
}

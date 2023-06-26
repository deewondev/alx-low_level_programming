#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String parameter
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

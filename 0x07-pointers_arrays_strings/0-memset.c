#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 *
 * @s: First parameter pointer
 *
 * @b: Second parameter string
 *
 * @n: Third parameter integer
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

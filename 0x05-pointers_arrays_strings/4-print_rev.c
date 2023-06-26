#include "main.h"

/**
 * print_rev - Prints a string in reverse order followed by a new line
 *
 * @s: String parameter
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int count, strlength = 0;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}
	s--;
	for (count = strlength; count > 0; count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

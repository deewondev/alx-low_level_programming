#include "main.h"

/**
 * _puts - Prints a string followed bya new line
 *
 * @str: String parameter
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

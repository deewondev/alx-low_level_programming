#include "main.h"

/**
 * puts_half - Prints half of a string, followed by new line
 *
 * @str: String parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, n = 0, half_n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	half_n = n / 2;
	if (n % 2 != 0)
	{
		half_n = (n + 1) / 2;
	}
	for (i = half_n; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

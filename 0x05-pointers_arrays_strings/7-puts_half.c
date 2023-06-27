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
	char *words = str;
	int i, n, half_n;

	while (*words != '\0')
	{
		words++;
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
}

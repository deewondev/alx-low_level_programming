#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: integer value
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -y;
	}
	if (y / 10)
	{
		print_number(y / 10);
	}
	_putchar((y % 10) + '0');
}

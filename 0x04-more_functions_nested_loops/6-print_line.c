#include "main.h"

/**
 * print_line - Draws straight line in terminal
 *
 * @n: Number of lines printed
 *
 * Return: void
 */

void print_line(int n)
{
	int loop;

	if (n > 0)
	{
		for (loop = 0; loop <= n; loop++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

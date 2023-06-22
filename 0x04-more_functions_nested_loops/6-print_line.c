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

	for (loop = 1; loop <= n; loop++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

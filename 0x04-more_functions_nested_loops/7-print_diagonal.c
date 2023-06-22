#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on terminal
 *
 * @n: Number of lines printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int loop, line;

	if (n > 0)
	{
		for (loop = 1; loop <= n; loop++)
		{
			for (line = 1; line < loop; line++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

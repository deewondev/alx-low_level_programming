#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: Size of the traingle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y >= 1; y--)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

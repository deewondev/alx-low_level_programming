#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 *
 * @a: Parameter array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int rows, cols;

	for (rows = 0; rows < 8; rows++)
	{
		for (cols = 0; cols < 8; cols++)
		{
			_putchar(a[rows][cols]);
		}

		_putchar('\n');
	}
}

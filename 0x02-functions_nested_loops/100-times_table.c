#include "main.h"

/**
 * print_times_table - Entry point
 *
 * description - This program prints n times table from 0
 *
 * @n: Parameter n accepts input of a number from user
 */

void print_times_table(int n)
{
	int i, mul, total;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				total = i * mul;
				if (total <= 9)
					_putchar(' ');
				if (total <= 99)
					_putchar(' ');
				if (total >= 100)
				{
					_putchar((total / 100) + '0');
					_putchar(((total / 10) % 10) + '0');
				}
				else if (total <= 99 && total >= 10)
				{
					_putchar((total / 10) + '0');
				}
				_putchar((total % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

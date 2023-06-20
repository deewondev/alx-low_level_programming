#include "main.h"

/**
 * times_table - Entry point
 *
 * description - This program prints 9 times table
 */

void times_table(void)
{
	int a, b, mul, mod, divi;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			if (mul > 9)
			{
				mod = mul % 10;
				divi = (mul - mod) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(divi + '0');
				_putchar(mod + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}

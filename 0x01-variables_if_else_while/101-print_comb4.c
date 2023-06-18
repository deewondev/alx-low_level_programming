#include <stdio.h>

/**
 * main - This program prints three unidentical set of digits.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				if ((x != y && y != z && x != z) && (x < y && y < z && x < z))
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if ((x + y + z) != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

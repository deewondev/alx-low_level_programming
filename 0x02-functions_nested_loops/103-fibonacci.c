#include <stdio.h>

/**
 * main - Entry point
 *
 * description - This program find and print even valued terms sum
 *
 * Return: 0 if success, else error code
 */

int main(void)
{
	int i;
	long x = 1, y = 2, sum = y;

	while (y + x < 4000000)
	{
		y += x;
		if (y % 2 == 0)
			sum += y;
		x = y - x;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}

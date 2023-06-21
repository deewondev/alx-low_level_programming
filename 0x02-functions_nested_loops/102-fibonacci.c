#include <stdio.h>

/**
 * main - Entry point
 *
 * description - This program prints first 50 fibonacci numbers from 1 nad 2
 *
 * Return: 0 if success, else code error
 */

int main(void)
{
	int i;
	long  x = 1, y = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", x);
		else if (i == 1)
			printf(", %ld", y);
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
	}
	printf("\n");
	return (0);
}

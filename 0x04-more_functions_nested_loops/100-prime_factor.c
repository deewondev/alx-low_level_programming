#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest prime factor of number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int x, n = 612852475143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((n % x == 0) && (n != x))
		{
			n = n / x;
		}
	}
	printf("%lu\n", n);

	return (0);
}

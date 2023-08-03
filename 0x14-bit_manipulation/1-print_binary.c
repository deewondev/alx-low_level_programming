#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: number to be converted to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bit, y = 1;

	for (i = 63; i >= 0; i--)
	{
		bit = (y << i) & n;
		if (bit)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

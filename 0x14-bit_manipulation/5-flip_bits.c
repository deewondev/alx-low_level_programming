#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number used in flip
 * @m: second number used in flip
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int xor, result, y = 1;

	xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		result = (xor >> i) & y;

		if (result)
			count++;
	}

	return (count);
}

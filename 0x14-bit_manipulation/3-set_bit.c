#include "main.h"

/**
 * set_bit - function that sets bit value to 1 at a given index
 * @n: number to be set to bit value
 * @index: index starting from 0 of bit to be set
 * Return: 1 if success, or -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = *n;
	unsigned long int y = 1;

	if (index > 63)
		return (-1);

	bit = (y << index) | bit;

	return (1);
}

#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer number to be cleared
 * @index: index startiing from 0 of bit to be set
 * Return: 1 if success, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y = 1;

	if (index > 63)
		return (-1);

	*n = (~(y << index) & *n);

	return (1);
}

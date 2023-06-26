#include "main.h"

/**
 * swap_int - Swaps values of two integers
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

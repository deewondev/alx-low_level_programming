#include "main.h"

/**
 * reverse_array - Function that reverse array of integers content
 *
 * @a: First parameter
 *
 * @n: Second parameter
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

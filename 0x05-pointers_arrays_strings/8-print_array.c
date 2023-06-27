#include "main.h"

/**
 * print_array - Prints n integer of array element followed by new line
 *
 * @a: Array pointer
 *
 * @n: Number of array element to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

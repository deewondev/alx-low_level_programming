#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * description - This program prints natural numbers from n to 98
 *
 * @n: parameter n accept a nutural number from user
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
		printf("\n");
	}
}

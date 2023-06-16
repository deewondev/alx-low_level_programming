#include <stdio.h>

/**
 * main - This program prints numbers from 0 - 9.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}

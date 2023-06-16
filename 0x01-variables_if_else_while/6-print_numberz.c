#include <stdio.h>

/**
 * main - This program prints number 0 - 9 using putchar function.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}

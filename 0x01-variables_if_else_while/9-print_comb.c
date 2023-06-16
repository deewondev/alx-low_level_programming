#include <stdio.h>

/**
 * main - This program prints all possible combination of single digit.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

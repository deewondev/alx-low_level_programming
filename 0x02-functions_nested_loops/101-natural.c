#include <stdio.h>

/**
 * main - Entry point
 *
 * description - This program computes sum of 3 or 5 multiples below 1024
 *
 * Return: 0 if success, else code error
 */

int main(void)
{
	int x, sum = 0;

	for (; x < 1024; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>

/**
 * main - This program prints alphabets in lowercase.
 * Return: (0) if success, else error code.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - This program prints lowercase alphabets in reverse order.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

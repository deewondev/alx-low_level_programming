#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * description - This program prints lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int num;
	char alphabet;

	for (num = 1; num <= 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

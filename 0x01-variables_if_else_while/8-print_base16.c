#include <stdio.h>

/**
 * main - This program prints hexadecimal numbers.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	char hexadec;

	for (hexadec = '0'; hexadec <= '9'; hexadec++)
	{
		putchar(hexadec);
	}
	for (hexadec = 'a'; hexadec <= 'f'; hexadec++)
	{
		putchar(hexadec);
	}
	putchar('\n');
	return (0);
}

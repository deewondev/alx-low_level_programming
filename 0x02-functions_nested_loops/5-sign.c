#include "main.h"

/**
 * print_sign - Entry point
 *
 * description - This program prints number sign
 *
 * @n: Parameter n takes input from user
 *
 * Return: 1 if positive, 0 if zero, and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

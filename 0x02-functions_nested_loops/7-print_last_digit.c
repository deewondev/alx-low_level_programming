#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * description - This program print last digit of number
 *
 * @num: Parameter num takes input from user
 *
 * Return: 0 if success, else error code
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}

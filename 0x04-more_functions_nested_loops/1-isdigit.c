#include "main.h"

/**
 * _isdigit - Checks for a digit from 0 through 9
 *
 * @c: takes an integer value
 *
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - Entry point
 *
 * description - This program checks for alphabetic character
 *
 * @c: Parameter c takes input from user
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

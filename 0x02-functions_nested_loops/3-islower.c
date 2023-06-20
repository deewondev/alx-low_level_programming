#include "main.h"

/**
 * _islower - Entry point
 *
 * description - This program checks for lowercase character
 *
 * @c: Parameter c takes input from user
 *
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

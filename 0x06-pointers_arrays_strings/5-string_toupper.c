#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase
 *
 * @x: Pointer
 *
 * Return: String
 */

char *string_toupper(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
	}

	return (x);
}

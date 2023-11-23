#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if there is one or more chars
 * in string b or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

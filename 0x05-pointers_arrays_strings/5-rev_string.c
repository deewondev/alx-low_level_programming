#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String parameter
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int i, count = 0;

	while (s[count] != '\0')
	{
		count += 1;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		reverse = s[i];
		s[i] = s[count];
		s[count] = reverse;
	}
}

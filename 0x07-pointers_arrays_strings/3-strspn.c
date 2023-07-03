#include "main.h"

/**
 * _strspn - Function that gets the prefix substring length
 *
 * @s: First parameter pointer
 *
 * @accept: Second parameter pointer
 *
 * Return: usingned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

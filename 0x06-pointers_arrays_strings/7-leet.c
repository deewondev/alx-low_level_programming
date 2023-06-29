#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 *
 * @str: Pointer
 *
 * Return: String
 */

char *leet(char *str)
{
	int x, y;
	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == n1[y])
				str[x] = n2[y];
		}
	}

	return (str);
}

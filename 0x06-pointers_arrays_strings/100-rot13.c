#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13
 *
 * @str: Pointer
 *
 * Return: String
 */

char *rot13(char *str)
{
	int x, y;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[x] == data1[y])
			{
				str[x] = data2[y];
				break;
			}
		}
	}
	return (str);
}

#include "main.h"

/**
 * puts2 - Prints every other character of a string, starts with
 * first character, followed by new line
 *
 * @str: String parameter
 *
 * Return: 0
 */

void puts2(char *str)
{
	char *words = str;
	int i, count = 0;

	while (*words != '\0')
	{
		words++;
		count += 1;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

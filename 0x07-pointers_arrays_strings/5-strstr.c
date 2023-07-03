#include "main.h"

/**
 * _strstr - Function that locates a substring
 *
 * @haystack: First parameter pointer
 *
 * @needle: Second parameter pointer
 *
 * Return: String
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack, *ned = needle;

		while (*hay == *ned)
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}

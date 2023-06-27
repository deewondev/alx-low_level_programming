#include "main.h"

/**
 * _strcpy - Copy string pointed by src including terminating null byte \0
 *
 * @dest: Pointer return value as copy to
 *
 * @src: Pointer parameter as copy from
 *
 * Return: dest pointer as string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0, count;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (count = 0; count < a; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';

	return (dest);
}

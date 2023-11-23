#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *endian;

	endian = (char *)&y;

	return (*endian);
}

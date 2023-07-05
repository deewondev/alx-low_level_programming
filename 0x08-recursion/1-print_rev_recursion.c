#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 *
 * @s: Parameter pointer
 *
 * Return: void or nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

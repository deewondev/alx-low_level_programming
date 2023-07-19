#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string parameter consisting of name(s)
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

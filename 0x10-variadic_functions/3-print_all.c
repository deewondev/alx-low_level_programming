#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of all types of argument passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(args);
}

#include "main.h"

/**
 * _isdigit - function that check if a string contains only digits
 * @s: string parameter
 * Return: 0 if digit is not found, otherwise 1
 */

int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - function that returns length of a string
 * @s: string parameter
 * Return: string length
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * _errorMsg - function that prints error followed by a new line
 * Return: nothing
 */

void _errorMsg(void)
{
	char str[] = "Error\n";
	int i, len = _strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	exit(98);
}

/**
 * _print_result - function that prints result of the program
 * @len: length of the array
 * @ptr: new pointer memory allocation
 * Return: nothing
 */

void _print_result(int len, int *ptr)
{
	int i, bool_x = 0;

	for (i = 0; i < len; i++)
	{
		if (ptr[i] != 0)
			bool_x = 1;
		if (bool_x == 1)
			_putchar(ptr[i] + '0');
	}

	if (bool_x == 0)
		_putchar('0');

	_putchar('\n');
	free(ptr);
}

/**
 * main - program that multiplies two positive numbers
 * @argc: argument counts
 * @argv: array of char with argc size
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k, len, len1, len2, digit1, digit2, *ptr;
	char *str1 = argv[1], *str2 = argv[2];

	if (argc != 3 || !(_isdigit(str1)) || !(_isdigit(str2)))
		_errorMsg();

	len1 = _strlen(str1), len2 = _strlen(str2), len = len1 + len2;

	ptr = malloc(sizeof(int) * len);

	if (ptr == 0)
		_errorMsg();

	for (i = 0; i < len; i++)
		ptr[i] = 0;

	for (k = len1 - 1; k >= 0; k--)
	{
		int carry = 0;

		digit1 = str1[k] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = 0;

			digit2 = str2[j] - '0';
			mul = carry + ptr[k + j + 1] + (digit1 * digit2);
			ptr[k + j + 1] = mul % 10;
			carry = mul / 10;
		}
		if (carry > 0)
			ptr[k + j + 1] += carry;
	}

	_print_result(len, ptr);
	return (0);
}

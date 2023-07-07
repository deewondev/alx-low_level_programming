#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts string to integer
 * @s: character parameter
 * Return: integer
 */

int _atoi(char *s)
{
	int x, d, n, len, f, digit;

	x = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;
	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++d;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);

	return (n);
}


/**
 * main - Program that multiplies two numbers
 * @argc: argument counts
 * @argv: array of size argc
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

#include "3-calc.h"

/**
 * op_add - function that returns the addition of a and b
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the subtraction of b from a
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the multiplication of a and b
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of a and b
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that returns the modulus of a and b
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

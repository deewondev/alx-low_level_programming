#include "main.h"

int _prime_number(int n, int i);

/**
 * is_prime_number - Function that returns 1 if the input
 * integer is a prime number, else return 0
 * @n: input number
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
 * _prime_number - Function that iterates and check if
 * input number is a prime number
 * @n: input number
 * @i: iterative number
 * Return: integer
 */

int _prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && (n % i) == 0)
	{
		return (0);
	}
	return (_prime_number(n, i - 1));
}

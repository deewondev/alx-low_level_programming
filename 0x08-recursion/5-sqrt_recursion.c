#include "main.h"

int _iterative_sqrt(int n, int i);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Calculated square root number
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_iterative_sqrt(n, 0));
}

/**
 * _iterative_sqrt - Function that finds the natural square root of a number
 * @n: Calculated square root number
 * @i: Iterative number
 * Return: square root integer
 */

int _iterative_sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (_iterative_sqrt(n, i + 1));
}

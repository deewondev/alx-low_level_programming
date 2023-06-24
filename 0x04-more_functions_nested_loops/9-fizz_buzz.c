#include <stdio.h>
#include "main.h"

/**
 * main - Prints 1 to 100
 * multiples of 3 prints Fizz
 * multiples of 5 prints Buzz
 * multiples of 15 prints FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x != 1 && x < 100)
		{
			printf(" %d", x);
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");

	return (0);
}

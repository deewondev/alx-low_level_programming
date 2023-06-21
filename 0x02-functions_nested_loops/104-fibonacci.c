#include <stdio.h>

/**
 * main - Entry point
 *
 * description - This program prints first 100 fibonacci numbers
 *
 * Return: 0 if success, else code error
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_1, fib1_2, fib2_1, fib2_2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_1 = fib1 / 10000000000;
	fib1_2 = fib1 % 10000000000;
	fib2_1 = fib2 / 10000000000;
	fib2_2 = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1_1 + fib2_1;
		half2 = fib1_2 + fib2_2;
		if (fib1_2 + fib2_2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1_1 = fib2_1;
		fib1_2 = fib2_2;
		fib2_1 = half1;
		fib2_2 = half2;
	}
	printf("\n");
	return (0);
}

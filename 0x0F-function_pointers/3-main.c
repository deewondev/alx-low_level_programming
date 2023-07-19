#include "3-calc.h"

/**
 * main - program that prints result of the operation
 * @argc: number of arguments used
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(num1, num2));

	return (0);
}

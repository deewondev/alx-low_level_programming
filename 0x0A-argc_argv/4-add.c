#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: argument counts
 * @argv: array of size argc
 * Return: result of addition
 */

int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}

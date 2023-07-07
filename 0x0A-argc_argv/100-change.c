#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints minimum number of coins
 * to make change for an amount of money
 * @argc: argument counts
 * @argv: array of size argc
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int x, cents, change = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int coins_len = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < coins_len; x++)
	{
		change += cents / coins[x];
		cents = cents % coins[x];
	}
	printf("%d\n", change);
	return (0);
}

#include <stdio.h>

/**
 * main - Program that prints all its arguments received from command line
 * @argc: argument counts
 * @argv: array of size argc
 * Return: strings
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

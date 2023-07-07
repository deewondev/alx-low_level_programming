#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: counts the number of command line arguments
 * @argv: an array of size argc
 * Return: Prgogram name
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	/* (void) argc; */
	printf("%s\n", *argv);

	return (0);
}

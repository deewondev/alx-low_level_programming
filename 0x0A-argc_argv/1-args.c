#include <stdio.h>

/**
 * main - Program that prints number of arguments passed into it
 * @argc: counts number of command line arguments
 * @argv: array of size argc
 * Return: integer of arguments count
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/*(void) argv;*/
	printf("%d\n", (argc - 1));

	return (0);
}

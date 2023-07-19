#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that prints the opcodes of itself
 * @argc: number of arguments by the program
 * @argv: array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	unsigned char *opcode = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		printf("%02x", opcode[index]);

		if (index == bytes - 1)
			continue;

		printf(" ");
	}

	printf("\n");

	return (0);
}

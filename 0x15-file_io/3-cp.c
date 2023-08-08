#include "main.h"

/**
 * _buffcreate - function that allocates 1024 bytes of memory
 * @filename: name of file to be created
 * Return: pointer to newly allocated memory
 */
char *_buffcreate(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * _fileclose - function that closes open file
 * @file_desc: file descriptor value to be closed
 * Return: nothing
 */
void _fileclose(int file_desc)
{
	int c;

	c = close(file_desc);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: pointer array to each argument passed
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int source, dest, bytes_rd, bytes_wr;
	char *file_from, *file_to, *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	buff = _buffcreate(file_to);
	source = open(file_from, O_RDONLY);
	bytes_rd = read(source, buff, 1024);
	dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || bytes_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buff);
			exit(98);
		}
		bytes_wr = write(dest, buff, bytes_rd);
		if (dest == -1 || bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buff);
			exit(99);
		}
		bytes_rd = read(source, buff, 1024);
		dest = open(file_to, O_WRONLY | O_APPEND);
	} while (bytes_rd > 0);
	free(buff);
	_fileclose(source);
	_fileclose(dest);
	return (0);
}


#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: file to be read and printed
 * @letters: number of letters read and print
 * Return: number of letters it could read and print, if file
 * cannot open or read or filename is NULL, return 0 and if
 * file fails or does not write expected amount of bytes, return0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_desc, bytes_rd, bytes_wr;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_desc);
		return (0);
	}

	bytes_rd = read(file_desc, buff, letters);
	if (bytes_rd == -1)
	{
		free(buff);
		close(file_desc);
		return (0);
	}
	bytes_wr = write(STDOUT_FILENO, buff, bytes_rd);

	free(buff);
	close(file_desc);

	return (bytes_wr);
}

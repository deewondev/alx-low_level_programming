#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, len = 0, bytes_wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	bytes_wr = write(file_desc, text_content, len);
	if (bytes_wr == -1)
		return (-1);

	close(file_desc);

	return (1);
}

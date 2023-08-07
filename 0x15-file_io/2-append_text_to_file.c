#include "main.h"

/**
 * append_text_to_file - function that appens text at
 * the end of a file
 * @filename: name of file used to append
 * @text_content: NULL terminated string to add at
 * the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, len = 0, bytes_wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	bytes_wr = write(file_desc, text_content, len);
	if (bytes_wr == -1)
		return (-1);

	close(file_desc);

	return (1);
}

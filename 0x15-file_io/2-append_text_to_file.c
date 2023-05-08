#include "main.h"

/**
 * append_text_to_file - this function Appends a text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: A string to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1 is returned
 *         and errno is set appropriately.failure cases include
 *         invalid arguments or the inability to write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int text_len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[text_len];)
			text_len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(fd, text_content, text_len);
	if (fd == -1 || bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}


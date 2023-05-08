#include "main.h"

/**
 * read_textfile - this function reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file being read
 * @letters: The maximum number of bytes to be read from the file
 * Return: The actual number of bytes read and printed to stdout,
 *         0 if filename is NULL or the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t bytes_write;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buffer, letters);
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);
	return (bytes_write);
}


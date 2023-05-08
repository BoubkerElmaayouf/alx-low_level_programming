#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *create_buff(char *file);
void close_f(int fd);

/**
 * create_buff - this function Allocates 1024 bytes for the buffer.
 * @file: name of the file buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer.
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_f - this function Closes file descriptors.
 * @fd: file descriptor to be closed.
 * Return: NOTHING
 */
void close_f(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments supplied to the programe
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * Description:
 * This program takes in two command-line arguments:
 * the name of the file to be copied and the name of the new file.
 * If the argument count is incorrect,
 * the program exits with code 97.
 * If the source file does not exist or cannot be read,
 * the program exits with code 98.
 * If the target file cannot be created or written to,
 * the program exits with code 99.
 * If either the source or target files cannot be closed,
 * the program exits with code 100.
*/
int main(int argc, char *argv[])
{
	int from, to;
	int r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	close_f(from);
	close_f(to);
	return (0);
}


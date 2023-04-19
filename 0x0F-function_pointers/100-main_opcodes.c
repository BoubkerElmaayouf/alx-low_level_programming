#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byte;
	char *array;
	int i = 0;

	if (!(argc == 2))
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	while (i < byte)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}


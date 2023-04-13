#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  a function that allocates memory using malloc.
 * @b: intiger
 * Return: NULL or a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *check = malloc(b);

	if (check == 0)
		exit(98);
	return (check);
}

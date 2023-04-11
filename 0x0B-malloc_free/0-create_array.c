#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: array size 
 * @c: initialization char 
 * Returns: NULL if size = 0, pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
	{
		return (0);
	}

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);
}

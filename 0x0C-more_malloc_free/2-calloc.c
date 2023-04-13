#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: a pointer to the allocated memory on success, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem  = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	/* to set the memory to zeroes */
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)mem + i) = 0;
	}
	return (mem);
}

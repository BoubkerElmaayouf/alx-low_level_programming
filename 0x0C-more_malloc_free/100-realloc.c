#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the memory block
 * Return: pointer to the reallocated memory block, or NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = NULL;
	char *old_ptr = NULL;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!new_ptr)
	{
		return (malloc(new_size));
	}
	 new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			new_ptr[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}

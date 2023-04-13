#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum value of set of integers numbers
 * @max: maximum value of set of integers numbers
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *list, size;
	int i;
	
	if (min > max)
		return (NULL);
	size = max - min + 1;
	list = malloc(size * sizeof(int));
	if (!list)
		return (NULL);
	for (i = 0; i < size; i++)
		list[i] = min++;
	return (list);
}

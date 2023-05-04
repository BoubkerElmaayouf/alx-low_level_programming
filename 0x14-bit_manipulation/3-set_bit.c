#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 * @n: A pointer to a number to change
 * @index: An index of the bit to set to 1
 * Return: 1 , or  -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


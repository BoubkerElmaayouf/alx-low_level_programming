#include "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number to change
 * @index: An index of the bit to clear
 * Return: 1, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


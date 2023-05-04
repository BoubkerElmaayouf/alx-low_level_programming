#include "main.h"

/**
 * get_bit - this  function returns the value of a bit at a given index.
 * @n: A number to search
 * @index: An index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int output;

	if (index >= 64)
	{
		return (-1);
	}
	output = n >> index;
	return (output & 1);
}

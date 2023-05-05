#include "main.h"

/**
 * flip_bits - this function returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: the  first number
 * @m: the  second number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = (sizeof(unsigned long int) * 8) - 1;
	int counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}


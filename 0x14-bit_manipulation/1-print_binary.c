#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: value to print in base 2
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i = 63, counter = 0;
	unsigned long int current;

	for (; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}


#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: input numbers
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ArgPtr;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ArgPtr, n);
	for (i = 0; i < n ; i++)
	{
		sum = sum + va_arg(ArgPtr, int);
	}
	va_end(ArgPtr);
	return (sum);

}

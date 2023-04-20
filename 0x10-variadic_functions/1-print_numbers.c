#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: a character to separete the numbers
 * @n:  number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ArgPtr;

	va_start(ArgPtr, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ArgPtr, int));
		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ArgPtr);

}

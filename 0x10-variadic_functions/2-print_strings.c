#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings, followed by a new line
 * @separator: character that separat the string
 * @n: number of argiment
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ArgPtr;
	char *string;

	va_start(ArgPtr, n);
	for (x = 0; x < n; x++)
	{
		string = va_arg(ArgPtr, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ArgPtr);
}

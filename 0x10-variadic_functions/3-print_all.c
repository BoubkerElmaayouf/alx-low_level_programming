#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: a list of types of argument
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *string, *separator = "";
	va_list listPtr;

	va_start(listPtr, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(listPtr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(listPtr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(listPtr, double));
					break;
				case 's':
					string = va_arg(listPtr, char*);
					if (string == NULL)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(listPtr);
}

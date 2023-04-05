#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int longer = 0;

	if (*s > '\0')
	{
		longer++;
		longer += _strlen_recursion(s + 1);
	}

	return (longer);
}


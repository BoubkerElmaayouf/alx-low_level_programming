#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_number - checks if a string contains a digit or not
 * @s: string
 * Return: 0 if a non-number is found, else 1
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * string_length - returns the length of a string
 * @s: string
 * Return: the length of the string.
 */

int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - handlling errors for main
 */
void error(void)
{
	printf("%s\n", ERROR_MSG);
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length0, carr, number1, number2, *res, i = 0, x = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_number(str1) || !is_number(str2))
		error();
	length1 = string_length(str1);
	length2 = string_length(str2);
	length0 = length1 + length2 + 1;
	res = malloc(sizeof(int) * length0);
	if (!res)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		res[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		number1 = str1[length1] - '0';
		carr = 0;
		for (length2 = string_length(str2) - 1; length2 >= 0; length2--)
		{
			number2 = str2[length2] - '0';
			carr += res[length1 + length2 + 1] + (number1 * number2);
			res[length1 + length2 + 1] = carr % 10;
			carr /= 10;
		}
		if (carr > 0)
			res[length1 + length2 + 1] += carr;
	}
	for (i = 0; i < length0 - 1; i++)
	{
		if (res[i])
			x = 1;
		if (x)
			_putchar(res[i] + '0');
	}
	if (x == 0)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}


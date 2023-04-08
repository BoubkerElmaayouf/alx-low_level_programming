#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - check if its a digit
 * @str: char
 * Return: 0 if it not a digit, 1 if its a digit
 */

int is_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: char
 * @argv: array
 * Return: result, If no number is passed 0, 1 if numbers contains symbol
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

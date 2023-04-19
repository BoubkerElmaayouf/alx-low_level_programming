#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - afunction that Prints the result of simple operations.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number1, number2;
	char *op;
	(void)argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number1 = atoi(argv[1]);
	op = argv[2];
	number2 = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && number2 == 0) ||
	    (*op == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(number1, number2));
	return (0);
}


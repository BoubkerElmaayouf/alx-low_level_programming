#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: int
 * @argv: char
 * Return: 1 if argc is greater then 0 , else result
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	res = number1 * number2;
	printf("%d\n", res);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 *  main - prints the minimum number of coins to make
 *  change for an amount of money.
 *  @argc: intiger
 *  @argv: array of char
 *  Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc != 2 || !argv[1])
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin += cents / 25;
	cents %= 25;
	coin += cents / 10;
	cents %= 10;
	coin += cents / 5;
	cents %= 5;
	coin += cents;
	printf("%d\n", coin);
	return (0);
}

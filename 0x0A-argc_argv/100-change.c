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
	int cents, change;
	int i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2 || !argv[1])
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	change = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			change++;
			cents -= coins[i];
		}
	}

	printf("%d\n", change);
	return (0);
}


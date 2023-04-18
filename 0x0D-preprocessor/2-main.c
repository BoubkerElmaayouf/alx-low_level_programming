#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the name of the file it was compiled from
 * Return: 0 (Success)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}


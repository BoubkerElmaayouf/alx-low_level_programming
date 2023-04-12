#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 * Return: If success, pointer to concatenated string. Otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			string[k] = av[i][j];
		}
		string[k++] = '\n';
	}
	string[k] = '\0';
	return (string);
}

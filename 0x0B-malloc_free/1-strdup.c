#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory.
 * @str: char
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		copy[j] = str[j];

	return (copy);
}


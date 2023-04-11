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
	char *copy = malloc(strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	return (copy);
}

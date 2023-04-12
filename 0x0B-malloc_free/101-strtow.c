#include <stdio.h>
#include <stdlib.h>

/**
 * words_counter - Counts the number of words in a string
 * @str: The string to count words in
 * Return: The number of words in str
 */
int words_counter(char *str)
{
	int f = 0;
	int c = 0;
	int w = 0;

	while (str[c] != '\0')
	{
		if (str[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
		c++;
	}
	return (w);
}
/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success),
 * or  NULL (Error)
 */
char **strtow(char *str)
{
	char **split_str, *new_string;
	int i, k = 0;
	int len = 0, words, c = 0;
	int start, end;

	while (*(str + len))
		len++;
	words = words_counter(str);
	if (words == 0)
		return (NULL);
	split_str = (char **) malloc(sizeof(char *) * (words + 1));
	if (split_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				new_string = (char *) malloc(sizeof(char) * (c + 1));
				if (new_string == NULL)
					return (NULL);
				while (start < end)
				{
					*new_string++ = str[start++];
				}
				*new_string = '\0';
				split_str[k] = new_string - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
		split_str[k] = NULL;
		return (split_str);

}

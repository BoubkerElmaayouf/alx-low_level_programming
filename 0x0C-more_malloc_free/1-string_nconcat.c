#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: string number 1
 * @s2: string number 2
 * @n: number of bytes
 * Return: a pointer from space in the memory to concatenates two strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int s1_len, s2_len;
	unsigned int  i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		n = s2_len;
	conc = malloc((s1_len + n + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		conc[i] = s1[i];
	}
	for (; i < s1_len + n && s2[i - s1_len] != '\0'; i++)
	{
		conc[i] = s2[i - s1_len];
	}
	conc[i] = '\0';
	return (conc);
}

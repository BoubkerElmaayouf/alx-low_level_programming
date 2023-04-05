#include "main.h"

int check(char *s, int i, int len);
int _recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is palindrome, 0 it's not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _recursion(s)));
}

/**
 * _recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of a string
 */
int _recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _recursion(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of a string
 *
 * Return: 1 if its a palindrome, 0 if not a palindrome
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}

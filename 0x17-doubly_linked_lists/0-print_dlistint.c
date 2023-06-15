#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a dlistint_t list
 * @h: the  head of double list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pos = h;
	int x = 0;

	for (; pos; x++)
	{
		printf("%d\n", pos->n);
		pos = pos->next;
	}
	return (x);
}

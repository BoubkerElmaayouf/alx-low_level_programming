#include "lists.h"
#include "lists.h"

/**
 * dlistint_len - functin that prints all the
 * elements of a dlistint_t list
 * @h: the head of the  double list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *pos = h;
	int x = 0;

	for (; pos; x++)
	{
		pos = pos->next;
	}
	return (x);
}

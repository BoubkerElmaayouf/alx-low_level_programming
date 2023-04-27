#include "lists.h"

/**
 * list_len - a funtion that Returns the number of elements
 * in a linked list_t list.
 * @h: the Head node of the linked list.
 * Return: Number of nodes in linked list.
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	for (; h != NULL; length++)
	{
		h = (*h).next;
	}
	return (length);
}

#include "lists.h"

/**
 * listint_len - this function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer to head of the list
 * Return: the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

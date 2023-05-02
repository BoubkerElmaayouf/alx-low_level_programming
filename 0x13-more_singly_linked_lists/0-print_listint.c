#include "lists.h"

/**
 * print_listint - this function that prints
 * all the elements of a listint_t list.
 * @h: pointer to head of the list
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

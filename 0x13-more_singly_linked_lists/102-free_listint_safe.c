#include "lists.h"

/**
 * free_listint_safe -  this function  frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the linked list.
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *curr, *next;

	if (h == NULL || *h == NULL)
		return (0);
	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		counter++;
		if ((void *)next <= (void *)curr)
		{
			*h = NULL;
			break;
		}
		curr = next;
	}
	return (counter);
}


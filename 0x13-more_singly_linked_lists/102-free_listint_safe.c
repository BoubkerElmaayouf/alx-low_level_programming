#include "lists.h"

/**
 * free_listint_safe -  this function  frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the linked list.
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}

	*h = NULL;

	return (counter);
}


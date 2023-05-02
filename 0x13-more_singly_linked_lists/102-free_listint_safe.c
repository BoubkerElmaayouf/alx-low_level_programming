#include "lists.h"

/**
 * free_listint_safe -  this function  frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the linked list.
 * Return: The number of nodes in the list that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	int diff;
	listint_t *temp;
	size_t len = 0;

	if (h == NULL || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}


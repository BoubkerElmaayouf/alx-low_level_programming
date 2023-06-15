#include "lists.h"

/**
 * free_dlistint - this function frees a list
 *
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	for (current = head; current; current = next)
	{
		next = current->next;
		free(current);
	}
}

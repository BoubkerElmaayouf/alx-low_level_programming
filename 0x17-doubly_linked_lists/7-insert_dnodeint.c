#include "lists.h"

/**
 * sum_dlistint - getting the sum of all n in nodes
 *
 * @head: the head of the list
 * Return: the sum of all n in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (dlistint_t *curr = head; curr != NULL; curr = curr->next)
	{
		sum += curr->n;
	}

	return (sum);
}

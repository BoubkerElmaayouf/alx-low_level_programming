#include "lists.h"

/**
 * sum_dlistint - funcs that returns the sum of all the nodes
 * @head: a head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum = 0;

	for (curr = head; curr != NULL; curr = curr->next)
	{
		sum += curr->n;
	}

	return (sum);
}

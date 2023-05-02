#include "lists.h"

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: the sum of all the data in the linked list,
 * otherwize 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int S = 0;
	listint_t *curr = head;
	
	while (curr != NULL)
	{
		S = S + curr->n;
		curr = curr->next;
	}
	return (S);
}

#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: Pointer to pointer to the first node of the list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	d = temp->n;
	*head = (*head)->next;
	free(temp);
	return (d);
}

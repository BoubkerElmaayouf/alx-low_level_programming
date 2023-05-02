#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and set head to NULL
 * @head: A Pointer to pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}

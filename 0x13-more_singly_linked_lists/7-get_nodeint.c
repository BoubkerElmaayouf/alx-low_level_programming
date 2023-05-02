#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 * @head: A  Pointer to pointer to the first node of the list
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node of the linked list, otherwize NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int counter = 0;

	while (curr != NULL)
	{
		if (counter == index)
		{
			return (curr);
		}
		counter++;
		curr = curr->next;
	}
	return (NULL);
}

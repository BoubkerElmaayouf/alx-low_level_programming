#include "lists.h"

/**
 * get_dnodeint_at_index - this func Get the dnodeint
 * at index object
 * @head: the head of the list
 * @index: the index to get the dnondeint from
 * Return: the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;

	for (; index > 0 && curr; index--)
	{
		curr = curr->next;
	}

	return (curr);
}

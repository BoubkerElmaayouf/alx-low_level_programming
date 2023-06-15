#include "lists.h"

/**
 * len_dlistint - computing the length of a double linked list
 * @h: the head
 * Return: the size of the list
 */

size_t len_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t size = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - this function insert node at the  index
 * @h: the head of the double list
 * @idx: index
 * @n: the data n for the new node
 * Return: the pointer the newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *curr, *next;

	if (h == NULL || idx > len_dlistint(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len_dlistint(*h))
		return (add_dnodeint_end(h, n));

	curr = *h;
	while (idx > 1)
	{
		curr = curr->next;
		idx--;
	}

	next = curr->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = curr;
	new_node->next = next;
	curr->next = new_node;
	next->prev = new_node;

	return (new_node);
}

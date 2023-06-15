#include "lists.h"

/**
 * add_dnodeint_end - func  that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: the head
 * @n: the data
 * Return: a pointer to the newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

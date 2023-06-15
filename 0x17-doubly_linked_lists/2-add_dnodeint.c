#include "lists.h"

/**
 * add_dnodeint - this function adding a node
 * at the beginning of the list
 * @head: the  head of double list
 * @n: the data
 * Return: a pointer to the new node that we create
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	new_node->next = *head;

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

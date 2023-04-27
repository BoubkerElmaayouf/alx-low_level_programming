#include "lists.h"

/**
 * add_node - A function that Adds a new node
 * at the beginning of a list_t list.
 * @head: A double pointer to head node of linked list.
 * @str: The string to be added as the value of the new node.
 * Return: Address of the new element (success), NULL if (failure).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;
	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	(*new_node).str = strdup(str);
	(*new_node).len = length;
	(*new_node).next = (*head);
	(*head) = new_node;
	return (*head);
}


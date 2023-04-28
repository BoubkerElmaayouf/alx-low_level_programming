#include "lists.h"

/**
 * create_new_node - Creates a new node for a linked list with
 * specified string and length values
 * @str: The string value for the new node.
 * @len: The length of the string value for the new node.
 * Return: Pointer to the new node on success, or NULL on failure.
 */

list_t *create_new_node(const char *str, unsigned int len)
{
	list_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	(*new_node).str = strdup(str);
	(*new_node).len = len;
	(*new_node).next = NULL;
	return (new_node);
}

/**
 * add_node_end_alt - a function that a function that adds
 * a new node at the end of a list_t list.
 * @head: A double pointer to head node of linked list.
 * @str: The string to be added as the value of the new node.
 * Return: NOTHING
 */
void add_node_end_alt(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = create_new_node(str, len);
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = new_node;
	}
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_list -A function that  frees a linked list
 * @head: A list_t list to be freed
 * Return: NOTHING
 */
void free_list(list_t *head)
{
	list_t *next_node;

	for (; head != NULL; head = next_node)
	{
		next_node = (*head).next;
		free((*head).str);
		free(head);
	}
}


#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: A pointer to the head of the linked list
 * @index: index of the node, starting at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}

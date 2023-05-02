#include "lists.h"

#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list.
 * @head: pointer to the first node in the linked list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (head == NULL)
		return (NULL);
	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}


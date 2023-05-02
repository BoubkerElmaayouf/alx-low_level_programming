#include "lists.h"

/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: A  Pointer to the head node of the list.
 * Return: the Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t counter = 0;

	if (head == NULL)
		exit(98);
	s = head;
	f = head->next;
	while (f != NULL && f != s)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		counter++;
		s = s->next;
		f = f->next;
		if (f != NULL)
			f = f->next;
	}
	if (f == NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		counter++;
	}
	else
	{
		printf("[%p] %d\n", (void *)s, s->n);
		counter++;
		s = s->next;
		while (s != f)
		{
			printf("[%p] %d\n", (void *)s, s->n);
			counter++;
			s = s->next;
		}
		printf("-> [%p] %d\n", (void *)s, s->n);
		counter++;
	}
	return (counter);
}

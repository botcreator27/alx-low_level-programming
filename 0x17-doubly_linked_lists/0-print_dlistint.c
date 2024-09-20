#include "lists.h"

/**
 * print_dlistint - printS out a doubly linked list
 * @h: head - pointer to first node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	count++;
	current = current->next;
	}
	return count;
}

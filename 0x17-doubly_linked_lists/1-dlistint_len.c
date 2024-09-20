#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 *                 in a linked dlistint_t list.
 * @h: the pointer to the first node
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
	count++;
	current = current->next;
	}
	return (count);
}

#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a dll
 * @head: pointer to the node
 * @n: data to be stored in node
 *
 * Return: success - address of new element , fail - NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
	return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head == NULL)
	{
	*head = new;
	}

	else
	{
	(*head)->prev = new;
	*head = new;
	}
	return (new);
}

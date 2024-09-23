#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of the list
 * @head: points to the head
 * @n: data ro be stored in node
 *
 * Return: success- address of new node, fail- NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	new_node->prev = NULL;
	return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
	temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}

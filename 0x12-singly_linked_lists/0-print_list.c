#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - traverses the node and prints out the data stored
 * @h: pointer to the node
 * Return: the number of nodes traversed
 */


size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
	printf("Error\n");
	return (1);
	}

	while (h != NULL)
	{
	count++;
	
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	
	else
	{	
	printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	}
	return (count);
}


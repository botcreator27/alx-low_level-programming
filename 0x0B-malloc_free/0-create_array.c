#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of the array
 *@c: character to fill array
 *
 *Return: returns the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	return (NULL);

	ar = malloc(size * (sizeof(char)));

	if (ar == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	ar[i] = c;
	}
	return (ar);
}

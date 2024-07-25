#include "function_pointers.h"

/**
 * int_index - seaches for an int
 * @array: array being searched
 * @cmp: pointer to function searching
 * @size: number of elements in array
 * 
 * Return: the index of the element or -1 if not found 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
	return (-1);
	}

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	return (i);
	}
	}

	return (-1);
}


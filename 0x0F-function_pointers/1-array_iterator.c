#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: array
 * @size: size of array
 * @action: function pointer calling the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
	while (i < size)
	{
	action(array[i]);
	i++;
	}
	}

}


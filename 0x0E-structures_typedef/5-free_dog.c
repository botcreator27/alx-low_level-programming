#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees space allocated to dog
* @d: points to the dog struct
*
* Return: 0
*/

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}


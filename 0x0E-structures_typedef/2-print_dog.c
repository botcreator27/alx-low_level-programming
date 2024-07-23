#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the elements of struct dog
 * @d: points to the struct dog
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
	{
	printf("Name: %s\n", d->name);
	}
	else if (d->name == NULL)
	{
	printf("Name: (nil)");
	}

	if (d->age != 0)
	{
	printf("Age: %f\n", d->age);
	}
	else if (d->age == 0)
	{
	printf("Age: (nil)");
	}

	if (d->owner != NULL)
	{
	printf("Owner: %s\n", d->owner);
	}
	else if (d->owner == NULL)
	{
	printf("Owner: (nil)");
	}
	}
}


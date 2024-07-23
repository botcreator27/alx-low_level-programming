#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/* Allocate memory for the new dog structure */

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL) 
	{
	return NULL;
	}

/* Allocate memory and copy the name */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL) {
	free(new_dog);
	return NULL;
	}
	strcpy(new_dog->name, name);

/* Allocate memory and copy the owner */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL) {
	free(new_dog->name);
	free(new_dog);
	return NULL;
	}
	strcpy(new_dog->owner, owner);

/* Set the age */
	new_dog->age = age;

	return new_dog;
}


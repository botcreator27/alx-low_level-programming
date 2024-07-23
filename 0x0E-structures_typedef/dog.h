#ifndef DOG_H
#define DOG_H

/**
 * struct dog - carries dog data
 * @name: name
 * @age: age
 * @owner: dog owner
 *
 * Description - dog data
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* init_dog initializes a variable of the type struct dog */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* defining dog_t as a new name for struct dog */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif


#include "hash_tables.h"
/**
 * hash_table_create - this function creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
	return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
	return (NULL);
	}

	for (; i < size; i++)
	{
	table->array[i] = NULL;
	}

	return (table);
}

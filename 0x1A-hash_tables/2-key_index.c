#include "hash_tables.h"

/**
 * key_index - this value computes the index of a key
 * @key: poinnter to the key
 * @size: size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

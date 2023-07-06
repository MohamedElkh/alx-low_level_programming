#include "hash_tables.h"

/**
 * key_index - func to get the index
 * @key: the key that hav the index
 * @size: the size of the array
 *
 * Return: the result
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

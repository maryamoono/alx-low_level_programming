#include "hash_tables.h"
/**
 * key_index - return the index of the key
 * @key: the key
 * @size: the size of the array of pointers
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key);

	return (i % size);
}

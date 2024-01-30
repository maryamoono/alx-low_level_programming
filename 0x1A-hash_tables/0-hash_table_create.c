#include "hash_tables.h"
/**
 * hash_table_create - a function to create a hash table
 * @size: the size of the array
 * Return: the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}

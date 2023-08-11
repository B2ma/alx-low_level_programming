#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table
  * @size: size of the array
  * Return: pointer to created hash table, Null otherwise
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	(hash_table_t *)malloc(sizeof(hash_table_t) +
			(size * sizeof(hash_node_t *)));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)(table + 1);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

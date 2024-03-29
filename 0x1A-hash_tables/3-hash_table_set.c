#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: the hash table you want to add or update the key/value to
  * @key: The key
  * @value: the value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *newNode, *current;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value), current->value = (value != NULL)
				? strdup(value) : strdup("");
		if (current->value == NULL)
		{
			return (0);
		}
		return (1);
	}
	current = current->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = (value != NULL) ? strdup(value) : strdup("");
	if (newNode->value == NULL)
	{
		free(newNode->key), free(newNode);
		return (0);
	}
	newNode->next = ht->array[index], ht->array[index] = newNode;
	return (1);
}

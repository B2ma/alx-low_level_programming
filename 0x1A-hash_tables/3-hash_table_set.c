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
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

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
		free(newNode->key);
		free(newNode);
		return 0;
	}
	if (ht->array[index] == NULL)
	{
		newNode->next = NULL;
		ht->array[index] = newNode;
	}
	else
	{
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
	}
	return (1);
}

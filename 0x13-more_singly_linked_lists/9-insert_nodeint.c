#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to head pointer
  * @idx: index of the list where the new node should be added
  * @n: data of the added node
  * Return: address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insertedNode = malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *current = *head;

	if (insertedNode == NULL)
	{
		return (NULL);
	}
	insertedNode->n = n;

	if (idx == 0)
	{
		insertedNode->next = *head;
		*head = insertedNode;
		return (insertedNode);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			if (insertedNode == NULL)
				return (NULL);
			insertedNode->n = n;
			insertedNode->next = current->next;
			current->next = insertedNode;
			return (insertedNode);
		}
		current = current->next;
		i++;
	}
	free(insertedNode);
	return (NULL);
}

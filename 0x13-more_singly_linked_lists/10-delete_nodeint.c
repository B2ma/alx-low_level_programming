#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  *	index of a listint_t linked list
  * @head: Pointer to head pointer
  * @index: the index of the node that should be deleted. Index starts at 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}

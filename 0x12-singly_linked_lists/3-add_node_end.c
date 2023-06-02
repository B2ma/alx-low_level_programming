#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the head of the linked list
  * @str: pointer to a string
  * Return: pointer to the new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNodeLast = malloc(sizeof(list_t));

	if (newNodeLast == NULL)
	{
		return (NULL);
	}
	newNodeLast->str = strdup(str);
	if (newNodeLast->str == NULL)
	{
		free(newNodeLast);
	}
	newNodeLast->len = strlen(str);
	newNodeLast->next = NULL;
	if (*head == NULL)
	{
		*head = newNodeLast;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNodeLast;
	}
	return (newNodeLast);
}

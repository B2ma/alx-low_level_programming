#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to the head pointer
  * @n: the element to assign
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNodeLast = malloc(sizeof(listint_t));

	if (newNodeLast == NULL)
	{
		return (NULL);
	}
	newNodeLast->n = n;
	newNodeLast->next = NULL;
	if (*head == NULL)
	{
		*head = newNodeLast;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNodeLast;
	}
	return (newNodeLast);
}

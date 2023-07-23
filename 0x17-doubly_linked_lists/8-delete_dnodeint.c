#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
  *	linked list
  * @head: head pointer of the list
  * @index: the index of the node that should be deleted
  * Return: 1, -1 otherwise
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeToDelete, *nextNode;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	nodeToDelete = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(nodeToDelete);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (nodeToDelete == NULL)
		{
			return (-1);
		}
		nodeToDelete = nodeToDelete->next;
	}
	if (nodeToDelete == NULL || nodeToDelete->next == NULL)
	{
		return (-1);
	}
	nextNode = nodeToDelete->next;
	nodeToDelete->next = nextNode->next;
	if (nextNode->next != NULL)
	{
		nextNode->next->prev = nodeToDelete;
	}
	free(nextNode);
	return (1);
}

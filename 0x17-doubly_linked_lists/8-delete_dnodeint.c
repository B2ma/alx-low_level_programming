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
	dlistint_t *nodeToDelete, *temp;
	unsigned int i;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0 && head != NULL)
	{
		nodeToDelete = *head;
		*head = (*head)->next;
		free(nodeToDelete);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	else
	{
		temp = *head;
		for(i = 0; i < index -1; i++)
		{
			if (temp != NULL)
			{
				temp = temp->next;
			}
		}
		if (temp != NULL && temp->next != NULL)
		{
			nodeToDelete = temp->next;
			temp->next = temp->next->next;
			if (temp->next->next != NULL)
				temp->next->next->prev = temp->next;
			free(nodeToDelete);
			return (1);
		}
	}
	return (-1);
}

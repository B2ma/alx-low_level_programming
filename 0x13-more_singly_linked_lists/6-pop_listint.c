#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list,
  *	and returns the head node’s data (n)
  * @head: pointer to head pointer
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	*head = (*head)->next;
	data = current->n;
	free(current);
	return (data);
}

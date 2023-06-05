#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list
  * @head: pointer to head pointer
  *Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	if (head == NULL && *head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	(*head)->next = previous;
	return (*head);
}

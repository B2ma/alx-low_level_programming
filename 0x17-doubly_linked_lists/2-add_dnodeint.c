#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head: pointer to head pointer of the list
  * @n: data of the new node
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = (dlistint_t *)malloc(sizeof(struct dlistint_s));
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->n = n;
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		(*head)->prev = newNode;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}

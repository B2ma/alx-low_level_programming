#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to head pointer of the list
  * @n: data of the new node
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

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
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}

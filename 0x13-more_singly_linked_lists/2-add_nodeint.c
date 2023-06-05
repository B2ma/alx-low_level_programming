#include "lists.h"

/**
  * add_nodeint - adds a new node at the beggining of a listint_t list
  * @head: pointer to the head pointer
  * @n: the data in the new node
  * Return: address of the new element, NULL otherwise
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to head
  * @str: pointer to the string
  * Return: address of new element, NULL otherwise
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

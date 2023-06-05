#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);
	current = *h;
	while (current != NULL)
	{
		if (current->next <= current)
		{
			*h = NULL;
			count++;
			break;
		}
		next_node = current->next;
		free(current);
		count++;
		current = next_node;
	}
	*h = NULL;
	return (count);
}

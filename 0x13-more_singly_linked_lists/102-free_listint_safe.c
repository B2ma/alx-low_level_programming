#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next_node;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		count++;
		next_node = current->next;

		if (current <= next_node)
		{
			free(current);
			break;
		}
		free(current);
		current = next_node;
	}
	*h = NULL;
	return (count);
}

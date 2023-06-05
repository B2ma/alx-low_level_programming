#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (current != NULL)
	{
		listint_t *tmp = current;

		current = current->next;
		free(tmp);
		count++;
		if (tmp <= current)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}

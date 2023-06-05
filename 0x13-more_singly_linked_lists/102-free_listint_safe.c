#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);
	while (current != NULL)
	{
		if (current->next >= current)
		{
			tmp = current->next;
			current->next = NULL;
			current = tmp;
			count++;
		}
		else
		{
			tmp = current;
			current = current->next;
			free(tmp);
			count++;
		}
	}
	*h = NULL;
	return (count);
}

#include "lists.h"
/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	return (count);
}

#include "lists.h"
/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *hare, *tortoise, *tmp, *last;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	tortoise = *h;
	hare = *h;
	last = NULL;
	while (tortoise != NULL && tortoise->next != NULL)
	{
		hare = hare->next;
		tortoise = tortoise->next->next;
		if (hare == tortoise)
		{
			tortoise = *h;
			while (tortoise != hare)
			{
				last = hare;
				hare = hare->next;
				tmp = tortoise->next;
				free(tortoise);
				count++;
				tortoise = tmp;
			}
			last->next = NULL;
			*h = NULL;
			return (count);
		}
	}
	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		count++;
	}
	*h = NULL;
	return (count);
}

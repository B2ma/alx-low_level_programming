#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (*h != slow)
			{
				listint_t *tmp = *h;
				*h = (*h)->next;
				count++;
				free(tmp);
			}
			*h = NULL;
			return (count);
		}
	}
	while (*h != NULL)
	{
		listint_t *tmp = *h;
		*h = (*h)->next;
		count++;
		free(tmp);
	}
	*h = NULL;
	return (count);
}

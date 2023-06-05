#include "lists.h"

/**
    * free_listint_safe - frees a listint_t list
    * @h: pointer to the list
    * Return: the size of the list that was free’d
    */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);
	while (current != NULL)
	{
		if (current->next <= current)
		{
			*h = NULL;
			return (0);
		}
		current = current->next;
	}
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			*h = NULL;
			return (count);
		}
		tmp = slow;
		slow = slow->next;
		free(tmp);
		count++;
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

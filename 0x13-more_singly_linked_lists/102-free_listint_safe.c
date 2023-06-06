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
	int loop_detected = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		if (current->next >= current)
		{
			if (loop_detected == 0)
			{
				tmp = current->next;
				current->next = NULL;
				current = tmp;
				loop_detected = 1;
			}
			else
			{
				if (current->next == *h)
				{
					free(*h);
					count++;
					break;
				}
				tmp = current->next;
				free(current);
				current = tmp;
				count++;
			}
		}
		else
		{
			tmp = current->next;
			free(current);
			current = tmp;
			count++;
		}
	}
	*h = NULL;
	return (count);
}

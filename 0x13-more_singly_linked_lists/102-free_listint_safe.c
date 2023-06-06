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
		if (loop_detected && current == *h)
		{
			*h = NULL;
			break;
		}
		if (current->next >= current)
		{
			if (!loop_detected)
			{
				loop_detected = 1;
				current->next = NULL;
			}
			else
			{
				tmp = current;
				current = current->next;
				free(tmp);
				count++;
			}
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

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
		next_node = current->next;
		if (current->next >= current)
		{
			if (!loop_detected)
			{
				loop_detected = 1;
				current->next = NULL;
			}
			else
			{
				free(current);
				count++;
			}
		}
		else
		{
			free(current);
			count++;
		}
		current = next_node;
	}
	*h = NULL;
	return (count);
}

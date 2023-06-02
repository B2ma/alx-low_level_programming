#include "lists.h"

/**
  * list_len - returns the number of elementsin a linked list_t list
  * @h: pointer to the list
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

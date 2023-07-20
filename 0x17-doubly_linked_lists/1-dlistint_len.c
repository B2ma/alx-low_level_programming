#include "lists.h"
/**
  * dlistint_len -returns the number of elements in a linked dlistint_t list
  * @h: pointer to head of double linked list
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		++i;
	}
	return (i);
}

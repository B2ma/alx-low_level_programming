#include "lists.h"

/**
  * print_listint_safe - prints a listint_t linked list
  * @head: head pointer
  * Return: the number of nodes in the list else 98.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;

	if (head == NULL)
		return (98);
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		if (current <= current->next)
		{
			printf(" -> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		current = current->next;
	}
	return (nodes);

}

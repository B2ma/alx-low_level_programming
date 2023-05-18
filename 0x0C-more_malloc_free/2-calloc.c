#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - allocates memory for an array, using malloc
  * @nmemb: number of elements in the array
  * @size: the size bytes of each element
  * Return: pointer to allocated memory, NULL otherwise
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *malloc_calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	malloc_calloc = malloc(size * nmemb);
	if (malloc_calloc == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(malloc_calloc, 0, size * nmemb);
		return (malloc_calloc);
	}
}

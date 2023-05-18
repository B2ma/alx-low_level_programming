#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: size of memory in bytes
  * Return: pointer to memory, status termination 98 otherwise
  */
void *malloc_checked(unsigned int b)
{
	void *mallocMem;

	mallocMem = malloc(b);
	if (mallocMem == NULL)
		exit(98);
	return (mallocMem);
}

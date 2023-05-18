#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value in the integer range
  * @max: maximum value in the integer range
  * Return: pointer to allocated memory, Null otherwise
  */
int *array_range(int min, int max)
{
	int i;
	int *arrayMalloc;
	int sizeArray;

	if (min > max)
		return (NULL);
	sizeArray = max - min + 1;
	arrayMalloc = malloc(sizeof(int) * sizeArray);
	if (arrayMalloc == NULL)
		return (NULL);
	for (i = 0; i < sizeArray; i++)
	{
		arrayMalloc[i] = min + i;
	}
	return (arrayMalloc);
}

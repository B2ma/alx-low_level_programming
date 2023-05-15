#include "main.h"
#include<stdlib.h>

/**
  * create_array - creates an array of chars, and
  *	initializes it with a specific char
  * @size: the size of array
  * @c: The initializing character
  * Return: pointer or NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  * @array: the available array
  * @size: size of the array
  * @cmp: pointer to the function to be used to compare values
  * Return: first element which is int.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (i);
}

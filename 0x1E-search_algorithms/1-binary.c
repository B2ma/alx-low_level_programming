#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 *	using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, right, left;

	if (array == NULL)
	{
		return (-1);
	}
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

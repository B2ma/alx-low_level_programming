#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a pointer to a 2 dimensional array of integers
  * @width: the width of the array
  * @height: Height of the array
  * Return: A pointer
  */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **gridMalloc = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (gridMalloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridMalloc[i] = (int *)malloc(width * sizeof(int));
		if (gridMalloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gridMalloc[j]);
			}
			free(gridMalloc);
			return (NULL);
		}
		for (j = 0; j < width ; j++)
		{
			gridMalloc[i][j] = 0;
		}
	}
	return (gridMalloc);
}

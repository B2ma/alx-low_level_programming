#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously
  *	created by your alloc_grid function
  * @grid: the allocated pointer to 2 dimensional array
  * @height: the height of 2-D array
  */
void free_grid(int **grid, int height)
{
	int i;

	if (*grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

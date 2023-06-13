#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Funtion frees a two dimensional grid,
  * previously created by your alloc_grid function
  *
  * @grid: The grid
  * @height: The height of the grid
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

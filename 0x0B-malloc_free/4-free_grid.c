#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees a 2D grid previously created by alloc_gird.
 *@grid: Pointer to the grid to be freed.
 *@height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a matrix
 * @grid: the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

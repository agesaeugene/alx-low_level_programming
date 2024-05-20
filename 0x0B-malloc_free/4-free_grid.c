#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees 2d array
 * @grid: grid in 2d
 * @height: dimension of grids height
 * Description: memory grid is freed
 * Return: 0 ()
 *
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

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - start of prog
 * @grid: param1
 * @height: param2
 * Return: void
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

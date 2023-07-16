#include "main.h"

/**
 * free_grid -  that frees a 2 dimensional grid previously
 *
 * @grid: input
 *
 * @height:input
 *
 * Return: NULL if size = 0
 *              otherwise a pointer, or NULL if it fails
 */

void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

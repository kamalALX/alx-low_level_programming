#include "main.h"

/**
 * free_grid - a function that returns a pointer
 *		to a 2 dimensional array of integers.
 *
 * @grid: pointer to array of pointers
 * @height: input
 *
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
}

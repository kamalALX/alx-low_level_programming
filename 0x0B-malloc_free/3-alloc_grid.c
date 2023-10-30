#include "main.h"

/**
 * alloc_grid - a function that returns a pointer
 *		to a 2 dimensional array of integers.
 *
 * @width: input
 * @height: input
 *
 *Return: -returns a pointer to a 2 dimensional array of integers.
 *	- return NULL on failure
 *	- If width or height is 0 or negative, return NULL.
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

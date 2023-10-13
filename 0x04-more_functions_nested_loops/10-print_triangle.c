#include "main.h"

/**
 * print_triangle - entry point
 * @size: input
 * Description: print a triangle
 */

void print_triangle(int size)
{
	int n, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size != 0 && size >= 0)
	{
		for (n = 1; n <= size ; n++)
		{
			for (i = 1; i <= size - n; i++)
			{
				_putchar(' ');
			}
			for (i = 1; i >= n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}

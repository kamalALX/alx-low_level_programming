#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on terminal.
 *
 * @n: input.
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= i; k++)
				_putchar(92);
			_putchar('\');
			_putchar('\n');
		}
	}
}

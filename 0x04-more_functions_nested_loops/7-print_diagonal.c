#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 *
 * @n: input
 */


void print_diagonal(int n)
{
	int symbole, space;

	if (n <= 0 && n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (symbole = 1; symbole < n; symbole++)
		{
			for (space = 1; space < symbole; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

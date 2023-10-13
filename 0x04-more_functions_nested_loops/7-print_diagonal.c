#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: input
 *
 * Description: write a diagonal line in the terminal.
*/

void print_diagonal(int n)
{
	int symbole, space;

	if (n == 0 && n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (symbole = 0; symbole < n; symbole++)
		{
			for (space = 0; space < symbole; space++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

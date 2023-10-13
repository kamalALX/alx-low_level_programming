#include "main.h"

/**
 * more_numbers - function prints 10 times numbers from 0 to 14.
 *
 */

void more_numbers(void)
{
	int n, j, i;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			i = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				i = j % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}

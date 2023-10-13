#include "main.h"

/**
 * print_most_numbers - function prints numbers
 *			from 0 to 9 except 2and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			putchar(n + 48);
	}
	putchar('\n');
}

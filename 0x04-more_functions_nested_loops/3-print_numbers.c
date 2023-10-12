#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + 48);
	_putchar('\n');
}

#include "main.h"

/**
 * print_number - a function that print an integer
 * @n:input
 * Return : 0 (success)
*/
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar ('-');
	}
	else if
	{
		i = n;
	}

	else (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}

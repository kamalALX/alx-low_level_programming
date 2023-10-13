nclude "main.h"

/**
 * print_number - print an integer
 * @n: unput
 * Return : 0 Always
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

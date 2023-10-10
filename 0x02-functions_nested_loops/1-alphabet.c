#include "main.h"

/**
 * print_alphabet - unse  _putchar function to print
 *			alphabets form a to z
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

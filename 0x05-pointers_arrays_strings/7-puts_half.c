#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 *
 * @str: input
 */

void puts_half(char *str)
{
	int n = 0, i, length;

	while (str[n] != '\0')
	{
		n++;
	}
	length = n - 1;

	if (length % 2 != 0)
	{
		i = (length - 1) / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}

	while (i <= length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

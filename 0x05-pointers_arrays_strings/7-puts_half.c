#include "main.h"

/**
 * puts_half - function that prints half of a string.
 *
 * @str: input.
 */

void puts_half(char *str)
{
	int n = 0, i, length;

	while (str[n] != '\0')
	{
		n++;
	}
	length = n;
	i = (length) / 2;

	while (i <= length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

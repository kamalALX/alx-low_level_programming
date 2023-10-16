#include "main.h"

/**
 * puts_half - function that prints half of a string.
 *
 * @str: input.
 */

void puts_half(char *str)
{
	int n = 0, i;

	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	i = n / 2;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

#include "main.h"

/**
 * puts2 - print every other character of a string,
 *		starting with the first character.
 *
 * @str: input.
 */

void puts2(char *str)
{
	int n = 0, length, i;

	while (str[n] != '\0')
	{
		n++;
	}
	length = n;

	i = 0;

	while (i <= length)
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}

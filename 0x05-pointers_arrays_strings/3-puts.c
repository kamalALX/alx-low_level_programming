#include "main.h"

/**
 * _puts - a function that prints a string.
 *
 * @str: input, pointer value.
 *
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		printf("%c", str[n]);
		n++;
	}
	printf("\n");
}

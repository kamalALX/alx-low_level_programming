#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 *
 * @s: input.
 *
 */

void print_rev(char *s)
{
	int n = 0;
	int lenght;

	while (s[n] != '\0')
	{
		n++;
	}
	lenght = n - 1;

	while (lenght >= 0)
	{
		printf("%c", s[lenght]);
		lenght--;
	}
	printf("\n");
}

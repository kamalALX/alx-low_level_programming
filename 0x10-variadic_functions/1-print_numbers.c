#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 *
 * @separator: the string to be printed between numbers.
 * @n:  the number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);

	if (*separator != '\0')
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(args, int));

			for (j = 0; separator[j] != '\0' && i < n - 1; j++)
				printf("%c", separator[j]);
		}
		va_end(args);
		printf("\n");
	}
}


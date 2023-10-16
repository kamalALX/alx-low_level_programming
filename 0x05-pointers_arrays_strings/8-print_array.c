#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers.
 *
 * @a: input
 * @n: input
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

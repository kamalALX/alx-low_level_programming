#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: input
 * @b: input
 *
 */

void swap_int(int *a, int *b)
{
	int i = *a, j = *b;
	*a = j, *b = i;
}

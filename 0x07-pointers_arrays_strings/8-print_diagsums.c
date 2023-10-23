#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals
 *			of a square matrix of integers.
 *
 * @a: pointer to array.
 * @size: input.
*/

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[i];
		a -= size;
	}
	printf("%i, %i\n", sum1, sum2);
}

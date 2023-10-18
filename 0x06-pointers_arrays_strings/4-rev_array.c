#include "main.h"

/**
 * reverse_array - unction that reverses the content of an array of integers.
 *
 * @a: input
 * @n: input
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int swap;

	while (start < end)
	{
		swap = a[start];
		a[start] = a[end];
		a[end] = swap;
		start++;
		end--;
	}
}

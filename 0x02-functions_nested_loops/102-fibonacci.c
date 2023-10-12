#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the first 50 Fibonacci numbers,
 *		starting with 1 and 2
 * Return: 0 success
*/
int main(void)
{
	long int n, i = 1, j = 1, sum;

	printf("%ld", i);
	for (n = 1; n < 50; ++n)
	{
		sum = i + j;
		printf(", %ld", sum);
		i = j;
		j = sum;
	}
	printf("\n");

	return (0);
}

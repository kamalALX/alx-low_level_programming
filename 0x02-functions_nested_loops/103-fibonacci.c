#include <stdio.h>
/**
 * main - ntry point
 *
 * Description: Fibonacci sequence
 *
 * Return: 0 success
 */
int main(void)
{
	int n = 1;
	long int  i = 0;
	long int j = 1;
	long int sum2 = 0;
	long int sum1 = 0;
	long int mxvalues = 4000000;

	while (i < mxvalues && j < mxvalues)
	{
		sum2 = i + j;

		sum1 += (((sum2 % 2) == 0) ? sum2 : 0);

		i = j;

		j = sum2;

		n++;
	}
	printf("%ld\n", sum1);
	return (0);
}

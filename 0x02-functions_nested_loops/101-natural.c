#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a function that calculate
 *		the sume of all multiples of 5 & 3
 *		to limit of1024
 * Return: 0
*/
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		sum += n;
	}
	printf("%i\n", sum);
	return (0);
}

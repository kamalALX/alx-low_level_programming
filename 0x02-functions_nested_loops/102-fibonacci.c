#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a function that calculate
 *		the sume of all multiples of 5 & 3
 *	to limit of1024
 * Return: 0
 */

int main(void)
{
	int set, n1 = 1, n2 = 2, sum;

	printf("%d, %d, ", n1, n2);

	for (set = 1; set <= 48; set++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d", sum);
		printf(", ");
	}
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers from 1 to 100 for multiples of 3 print Fizz,
 *		for multiples of 5 print Buzz for multiples of both print FizzBuzz.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0 && n % 5)
			printf("FizzBuzz");
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}

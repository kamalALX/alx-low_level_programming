#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the first 98 Fibonacci numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long int a, b, c, B, B2, C, C2;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	B = b / 1000000000;
	B2 = b % 1000000000;
	C = c / 1000000000;
	C2 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", C + (C2 / 1000000000));
		printf("%lu", C2 % 1000000000);
		C = C + B;
		B = C - B;
		C2 = C2 + B2;
		B2 = C2 - B2;
	}
	putchar("\n");

	return (0);
}

#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers starting from zerp
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");

	return (0);
}


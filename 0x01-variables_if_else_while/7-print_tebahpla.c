#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		--chr;
	}
	putchar('\n');

	return (0);
}

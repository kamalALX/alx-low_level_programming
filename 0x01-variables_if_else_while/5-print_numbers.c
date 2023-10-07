#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all  single digit numbers starting from zero
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		++num;
	}
	putchar('\n');

	return (0);
}

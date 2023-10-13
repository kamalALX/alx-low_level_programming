#include <stdio.h>
/**
 * main - entry point
 * Description: find the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long fact;
	long num = 612852475143;

	for (fact = 2; fact <= num; fact++)
	{
		if (num % fact == 0)
		{
			num /= fact;
			fact--;
		}
	}
	printf("%ld\n", fact);
	return (0);
}

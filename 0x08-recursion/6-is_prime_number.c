#include "main.h"

/**
 * is_prime_number - return 1 if the input integer is a prime number
 *
 * @n: input number
 * @i: number to start counting rom
 *
 * Return: return 1 if the number is prime
 *		else return 0
 */

int prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - return 1 if n is prime
 *
 * @n: number to be checked
 * @i: number to start checking from
 *
 * Return: 1 if n is prime
 *		else return 0.
 */

int prime(int n, int i)
{
	if (i <= 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(n, i - 1));
}

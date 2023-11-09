#include "variadic_functions.h"

/**
 * sum_them_all -  a function that calculate
 *		the sum of all its parameters.
 *
 * @n: number of arguments.
 *
 * Return: if n = 0, returns (0)
 * else returns the sum of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}

#include "main.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y.
 *
 * @x: the base
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	n = x * _pow_recursion(x, y - 1);
		return (n);
}

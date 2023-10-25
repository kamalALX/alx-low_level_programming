#include "main.h"

/**
 * _sqrt_recursion -  a function that returns the natural
 *		square root of a number.
 * @n: input number.
 * @i: square number
 *
 * Return: the square of n
 *	If n does not have a natural square root return -1.
 */

int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 0));
}

/**
 * square - returns the square root of a number
 * @n: input number.
 * @i: squared number.
 *
 * Return: return the natural
 *	square root of the input number.
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}

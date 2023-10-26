#include "main.h"
/**
 * _isdigit - function that checks if c is a digit.
 *
 * @c: input
 * Return: 1 is c is digit
 *		retuen 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}


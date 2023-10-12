#include "main.h"
/**
 * _isdigit - function that checks if c is a digit.
 *
 * Return: 1 is c is digit
 *		retuen 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _abs - function that compute the absolute value of an integer
 *
 * @n: The int of function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{

	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}

#include "main.h"

/**
 * print_sign - print + if n is greater than 0
 *		print 0 if n equal to 0
 *		print - if n less than 0
 *
 * @n: input of prinnt_sign function
 *
 * Return: return 1 if n greater than 0
 *		return 0 if n equal to 0
 *		return -1 if n less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

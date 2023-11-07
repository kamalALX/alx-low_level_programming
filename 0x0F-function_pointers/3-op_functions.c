#include "3-calc.h"

/**
 * op_add - a function that calculate the sum of two numbers
 *
 * @a:the first number
 * @b:the second number
 *
 * Return: The sum of a and b
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - a function that caculates the substraction of two numbers
 *
 * @a:The first number
 * @b:The second number
 *
 * Return: The Difference of a and b
*/

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - a function that caculates the multiplication of two numbers
 * @a:The first number
 * @b: The second number
 *
 * Return: The multiplication of a and b
*/

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - a function that caculates the division of two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The result of int a devided by int b.
*/

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - a function that caculates
 *		the remainder of the division of two numbers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
*/

int op_mod(int a, int b)
{
	return ((a) % (b));
}

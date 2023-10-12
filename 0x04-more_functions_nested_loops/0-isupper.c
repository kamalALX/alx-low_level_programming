#include "main.h"

/**
 * _isupper - check if c is upper or lower
 *			case character.
 *
 * @c: input
 *
 * Return: 1 (upper case character)
 *		2 (lower case character)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

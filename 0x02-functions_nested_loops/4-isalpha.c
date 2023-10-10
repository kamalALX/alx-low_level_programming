#include "main.h"

/**
 * _isalpha - checks if a character is either lower
 *				or upper case
 *
 * @c: input of the function
 *
 * Return: if upper or lower case return 1
 *		else 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

#include "main.h"

/**
 * get_endianness - a funcrion that checks whether bytes
 *	are represented from left to right or right to left.
 *
 * Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	if (*c == 1)
		return (1);
	return (0);

}

#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *	we would need to flip to get from one number to another.
 * @n: original number.
 * @m: the number that we flip to.
 *
 * Return: the number of bits that we need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int flipped = n ^ m;

	while (flipped > 0)
	{
		if (flipped & 1)
			i++;
		flipped >>= 1;
	}
	return (i);
}

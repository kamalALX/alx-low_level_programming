#include "main.h"

/**
 * *_memcpy - unction that copies memory area.
 *
 * @dest: input
 * @src: input
 * @n: input
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest - 50);
}

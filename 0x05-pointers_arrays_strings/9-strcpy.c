#include "main.h"

/**
 * _strcpy - copies the string pointed to by src.
 *
 * @dest: input
 * @src: input
 *
 * Return: return the value of pointer dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;
	int add0 = dest;

	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i <= n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (add0);
}

